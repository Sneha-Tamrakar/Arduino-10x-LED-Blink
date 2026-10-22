int led_pin= 12;

void setup() {
  pinMode (led_pin, OUTPUT);
  for(int i=0;i<10;i++) {
   digitalWrite (led_pin, HIGH);
   delay(1000);
   digitalWrite (led_pin, LOW);
   delay(1000);
 }
}

void loop() {
 // Empty loop so LED stays OFF after 10 blinks
}
  
