// C++ code
//
int out = 0;

int in = 0;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  in = 1000;
  out = 500;
  digitalWrite(7, HIGH);
  delay(in); // Wait for in millisecond(s)
  digitalWrite(7, LOW);
  delay(in); // Wait for in millisecond(s)
  digitalWrite(5, HIGH);
  delay(out); // Wait for out millisecond(s)
  digitalWrite(5, LOW);
  delay(out); // Wait for out millisecond(s)
  digitalWrite(3, HIGH);
  delay(in); // Wait for in millisecond(s)
  digitalWrite(3, LOW);
  delay(in); // Wait for in millisecond(s)
}