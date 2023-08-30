const int tb = A0; // tmbl
const int lpin = 7;   // led
bool led = false;    

void setup() {
  pinMode(tb, INPUT_PULLUP); 
  pinMode(lpin, OUTPUT);
}

void loop() {
  if (digitalRead(tb) == LOW) { //jiak tmbol ditekn slma 50ms
    delay(50); // debouncing butoon
    if (digitalRead(tb) == LOW) { // dan jika tbml ditekan
      led = !led; // balik kondisi bool ke true
      digitalWrite(lpin, led ? HIGH : LOW);// cek kondisi terahkir boolean led
    while (digitalRead(tb) == LOW) { } //menunggu smpai tombol ditekan dan kemudian melepaskannya
    }
  }
}
