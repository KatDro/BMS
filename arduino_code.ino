//constants used to set pin numbers:
const int LIGHT_OUT = 3;
const int PUSH_BUTTON = 5;

bool LIGHT_STATE = true;             //state of light

void setup() {
  pinMode(LIGHT_OUT, OUTPUT);         //LED as output
  pinMode(PUSH_BUTTON, INPUT_PULLUP); //button to turn light on
  digitalWrite(LIGHT_OUT, LOW);       //turn light off
}

void loop() {
  if(digitalRead(PUSH_BUTTON) == LOW) {
  //button is pressed
    delay(500);                        //delay to debounce switch
    digitalWrite(LIGHT_OUT, LIGHT_STATE);
    LIGHT_STATE = !LIGHT_STATE; 
  }
}
