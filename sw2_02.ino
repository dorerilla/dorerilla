#define PIN_LED 7
int i = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial){
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, 1); // turn off LED.
  // put your setup code here, to run once:
}

void loop() {
    digitalWrite(PIN_LED, 0);
    delay(1000);
    while(i<5){
      digitalWrite(PIN_LED, 1);
      delay(100);
      digitalWrite(PIN_LED, 0);
      delay(100);
      Serial.println(i);
      i = i+1;
    }
    while(1){
    digitalWrite(PIN_LED, 1);
    } //infiniti loop
   
  // put your main code here, to run repeatedly:
}
