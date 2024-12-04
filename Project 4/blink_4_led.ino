
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
  digitalWrite(Red, HIGH);      // turn the Red LED on (HIGH is the voltage level)   
  delay(200);                   // wait for a 0.2 s
  digitalWrite(Red, LOW);       // turn the Red LED off by making the voltage LOW
  delay(200);                  // wait for a 0.2 s

  digitalWrite(Yellow, HIGH);   // turn the Yellow LED on (HIGH is the voltage level)   
  delay(200);                   // wait for a 0.2 s
  digitalWrite(Yellow, LOW);    // turn the Yellow LED off by making the voltage LOW
  delay(200);                   // wait for a 0.2 s

  digitalWrite(Green, HIGH);  // turn the Green LED on (HIGH is the voltage level)   
  delay(200);                 // wait for a 0.2 s
  digitalWrite(Green, LOW);   // turn the Green LED off by making the voltage LOW
  delay(200);                 // wait for a 0.2 s
  
  digitalWrite(Blue, HIGH);   // turn the Blue LED on (HIGH is the voltage level) 
  delay(200);                 // wait for a 0.2 s
  digitalWrite(Blue, LOW);    // turn the Blue LED off by making the voltage LOW
  delay(200);                 // wait for a 0.2 s


  



}