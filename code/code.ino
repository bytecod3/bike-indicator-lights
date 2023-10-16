#define DEL_MID 200
#define DEL_MAIN 1000

int left_pin_1=5, left_pin_2=6, right_pin_1=7, right_pin_2=8;

void setup() {
  
  pinMode(left_pin_1, OUTPUT);
  pinMode(left_pin_2, OUTPUT);
  pinMode(right_pin_1, OUTPUT);
  pinMode(right_pin_2, OUTPUT);
  
}

void loop() {
 left();
right();
}

void left(){
  // indicate going left
  digitalWrite(left_pin_1, HIGH);
  delay(DEL_MID);
  digitalWrite(left_pin_1, LOW);
  delay(DEL_MID);
  
  digitalWrite(left_pin_2, HIGH);
  delay(DEL_MID);
  digitalWrite(left_pin_2, LOW);
  delay(DEL_MID);

  
}

void right(){
  // indicate going left
  digitalWrite(right_pin_1, HIGH);
  delay(DEL_MID);
  digitalWrite(right_pin_1, LOW);
  delay(DEL_MID);

  digitalWrite(right_pin_2, HIGH);
  delay(DEL_MID);
  digitalWrite(right_pin_2, LOW);
  delay(DEL_MID);
}

void both(){
  left();
  delay(DEL_MAIN);
  right();
}
