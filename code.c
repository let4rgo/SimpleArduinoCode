 #include <Keyboard.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  Keyboard.begin();
  delay(500);
  Execute();
  Type("cmd");
  Enter();
  delay(500);
  Type("shutdown /s /t 10 /c YourMessage");
  Enter();
  Keyboard.end();
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
}

void Enter(){
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);
  delay(500);
}

void Type(char txt[]){
  Keyboard.print(txt);
  delay(500);
}

void Execute(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500);
}
