// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Serial.println((-40 + 0.488155 * (analogRead(A0) - 20)));
  if ((-40 + 0.488155 * (analogRead(A0) - 20)) > 34 && (-40 + 0.488155 * (analogRead(A0) - 20)) < 45) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if ((-40 + 0.488155 * (analogRead(A0) - 20)) < 34) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if ((-40 + 0.488155 * (analogRead(A0) - 20)) > 45) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  delay(10); 
}