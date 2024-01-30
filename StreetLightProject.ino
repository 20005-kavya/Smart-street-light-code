int led1 = 2;
int led2 = 3;
int LDR = A0;

void setup () {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int LDRValue = analogRead(LDR);
  Serial.print("sensor = ");
  Serial.print(LDRValue);
  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  Serial.println(" It's Bright Outside; Lights Status: OFF");

  if (LDRValue < 10) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    Serial.println("Its Dark Outside");
  }
  else {
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     Serial.println("Its Bright Outside");

  }
}


