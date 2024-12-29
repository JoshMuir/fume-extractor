
constexpr int outputPin = 32;

void setup(){
    Serial.begin(115200);
    pinMode(outputPin, OUTPUT);
}

void loop(){
    for(int i = 10; i < 256; i++){
        analogWrite(outputPin, i);
        delay(100);
    }
}