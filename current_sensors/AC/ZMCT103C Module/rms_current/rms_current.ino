 /*
Made on Dec 22, 2020
By MehranMaleki @ Electropeak
Home
*/

// Must be determined using a reference measurement
#define calibration_const 355.55

int max_val;
int new_val;
int old_val = 0;
float rms;
float IRMS;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  new_val = analogRead(A0);
  if(new_val > old_val) {
    old_val = new_val;
  }
  
  else {
    delayMicroseconds(50);
    new_val = analogRead(A0);
    if(new_val < old_val) {
      max_val = old_val;
      old_val = 0;
    }
    
    rms = max_val * 5.00 * 0.707 / 1024;
    IRMS = rms * calibration_const;
    
    Serial.print("  IRMS: ");
    Serial.println(IRMS);
    
    delay(1000);
  }
}
