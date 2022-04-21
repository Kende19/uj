#define GOMB_KOZEP 8
#define GOMB_FEL  6
#define GOMB_LE    5
#define GOMB_JOBB  7
#define GOMB_BAL   4
void setup() {
  pinMode (GOMB_KOZEP,  INPUT);
    pinMode (GOMB_FEL,  INPUT);
      pinMode (GOMB_LE,  INPUT);
        pinMode (GOMB_JOBB,  INPUT);
          pinMode (GOMB_BAL,  INPUT);
  Serial.begin(9600);
  Serial.print("BOSS");
  Serial.println("Kende");


}

void loop() {
          if (digitalRead(GOMB_KOZEP))
  
  {
    tone(2, 2000, 200);
  }
            if (digitalRead(GOMB_FEL))
  
  {
    tone(2, 1000, 200);
  }
            if (digitalRead(GOMB_LE))
  
  {
    tone(2, 3000, 200);
  }
            if (digitalRead(GOMB_JOBB))
  
  {
    tone(2, 500, 200);
  }
            if (digitalRead(GOMB_BAL))
  
  {
    tone(2, 880, 200);
  }
}
  
