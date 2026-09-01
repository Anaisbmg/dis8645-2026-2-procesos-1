


char *versos[] = {
   "Hope is the thing with",
   "feathers",
   "That perches in the",
   "soul",
   "and sings the tune without the words",
   "and never stops",
   "at all..."

};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(versos[0]);
Serial.println(versos[1]);
Serial.println(versos[2]);
Serial.println(versos[3]);
Serial.println(versos[4]);
Serial.println(versos[5]);
Serial.println(versos[6]);
Serial.println(versos[7]);

}
