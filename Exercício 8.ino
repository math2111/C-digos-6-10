// C++ code
//
int i = 0;

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  for (i = 0; i <= 255; i += 5) {
    analogWrite(11, i);
    delay(50); // Wait for 50 millisecond(s)
  }
}