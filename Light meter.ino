int pin[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

int sensor = 0;
int x = 0;
int value = 0;

void setup(){
  Serial.begin(9600);
  for (x = 0; x <= 12; x++){
    pinMode(pin[x], OUTPUT);
  } 
}
  
void loop(){
  sensor = analogRead(A0);
  Serial.println(sensor); 
  sensor = sensor / 80;
  if (value <= sensor) {
  for (x = 0; x <= sensor; x++){
    digitalWrite(pin[x], HIGH);
    value = sensor;
    }
  }
  else {
    for (x = 0; x <= 12; x++){
        digitalWrite(pin[x], LOW);
        value = sensor - 1;
       }
    }
    
 
}