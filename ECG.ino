//Make By MMH Fahim.
#define LOP_Pin 5 // Setup for leads off detection LO +
#define LON_Pin 6 // Setup for leads off detection LO -
#define output_Pin A0

void setup() {

  Serial.begin(9600);
  pinMode(LOP_Pin, INPUT);
  pinMode(LON_Pin, INPUT);
  pinMode(output_Pin, OUTPUT);

}
// MMHF_UHA
void loop() {

  if (digitalRead(LOP_Pin) == 1) {
    Serial.println('!');
  }
// MMHF_UHA
  if (digitalRead(LON_Pin) == 1) {
    Serial.println('!');
  }
// MMHF_UHA
  else {
    Serial.println(analogRead(output_Pin));
  }

  delay(1);

}
