void setup() {
  Serial.begin(9600); 
  Serial.println("Handari egy..");

      Mode(2, OUTPUT;)
}

void loop() {
  while(Serial.available() > 0) {
  byte adat = Serial.read();
  if (adat == 'a') {
    Serial.println("BOMB ACTIVATED...");
    for (int i = 3; i >= 0; i--) {
      Serial.print(i);
      Serial.println(" ... ");
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay (400);    
  }
    Serial.println("Allah akbar!");
    digitalWrite(2, HIGH);
  }
  else {
    Serial.println("Hiba");
  }
  }
}
