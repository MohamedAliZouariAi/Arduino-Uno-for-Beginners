
int Blue = 4;
int Green = 5;
int Yellow = 6;
int Red = 7;

void setup() {
  // initialize digital pins 4, 5, 6, 7 as  outputs.
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(Blue, HIGH);    // turn the LEDs on (HIGH is the voltage level)
  digitalWrite(Green, HIGH);
  digitalWrite(Yellow, HIGH);
  digitalWrite(Red, HIGH);
  delay(500);                 // wait for a 0.5 s
  digitalWrite(Blue, LOW);    // / turn the LEDs off by making the voltage LOW
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Red, LOW);     
  delay(500);                 // wait for a 0.5 s
}
