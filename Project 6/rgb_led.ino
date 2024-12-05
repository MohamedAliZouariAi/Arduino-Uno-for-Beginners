// define pins
#define RED 6
#define GREEN 5
#define BLUE 3


void setup() {
  // setup LED lights
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}
void loop() {

  // off
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 0);
    analogWrite(RED, 0);
    delay(1000);

  // White
    analogWrite(BLUE, 225);
    analogWrite(GREEN, 225);
    analogWrite(RED, 225);
    delay(1000);

  // Red
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 0);
    analogWrite(RED, 225);
    delay(1000);

  // Orange 
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 75);
    analogWrite(RED, 225);
    delay(1000);

  // Yellow
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 220);
    analogWrite(RED, 225);
    delay(1000);

  //Green
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 225);
    analogWrite(RED, 0);
    delay(1000);

  //Blue
    analogWrite(BLUE, 225);
    analogWrite(GREEN, 0);
    analogWrite(RED, 0);
    delay(1000);

  // Violet
    analogWrite(BLUE, 225);
    analogWrite(GREEN, 0);
    analogWrite(RED, 100);
    delay(1000);
}