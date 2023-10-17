#include <Arduino.h>

int potRead = 0;
int potRes;
int compB;
int buttonPress = LOW;
const int buttonPin = 33;
int Pot = 34;
int photoCount = 0;
const int photoRes = 35;
int segment_A = 15;
int segment_B = 2;
int segment_DP = 0;
int segment_C = 4;
int segment_D = 16;
int segment_E = 17;
int segment_F = 18;
int segment_G = 5;
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

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPinA, INPUT);
  pinMode(buttonPinB, INPUT);
  pinMode(buttonPinC, INPUT);
  pinMode(buttonPinD, INPUT);
  pinMode(segment_A, OUTPUT);
  pinMode(segment_B, OUTPUT);
  pinMode(segment_DP, OUTPUT);
  pinMode(segment_C, OUTPUT);
  pinMode(segment_D, OUTPUT);
  pinMode(segment_E, OUTPUT);
  pinMode(segment_F, OUTPUT);
  pinMode(segment_G, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:


Nine();
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


void Random(){
  digitalWrite(segment_A, HIGH);
  digitalWrite(segment_DP, LOW);
  delay(400);
  digitalWrite(segment_A, LOW);
  digitalWrite(segment_DP, LOW);

  digitalWrite(segment_B, HIGH);
  digitalWrite(segment_DP, LOW);
  delay(400);
  digitalWrite(segment_B, LOW);
  digitalWrite(segment_DP, LOW);

  digitalWrite(segment_C, HIGH);
  delay(400);
  digitalWrite(segment_C, LOW);

  digitalWrite(segment_D, HIGH);
  delay(400);
  digitalWrite(segment_D, LOW);

  digitalWrite(segment_E, HIGH);
  delay(400);
  digitalWrite(segment_E, LOW);

  digitalWrite(segment_F, HIGH);
  delay(400);
  digitalWrite(segment_F, LOW);

  digitalWrite(segment_G, HIGH);
  delay(400);
  digitalWrite(segment_G, LOW);
  delay(400);
}
