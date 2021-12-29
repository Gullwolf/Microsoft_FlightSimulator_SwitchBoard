#include <HID-Project.h>
#include <HID-Settings.h>

  int inputA = 0;
  int inputB = 1;
  int inputC = 2;
  int inputD = 3;
  int inputE = 4;
  int inputF = 5;
  int inputG = 6;
  int inputH = 7;
  int inputI = 8;
  int inputJ = 9;
  int inputK = 10;
  int inputL = 11;
  

void setup() {
  
  pinMode(inputA, INPUT);
  pinMode(inputB, INPUT);
  pinMode(inputC, INPUT);
  pinMode(inputD, INPUT);
  pinMode(inputE, INPUT);
  pinMode(inputF, INPUT);
  pinMode(inputG, INPUT);
  pinMode(inputH, INPUT);
  pinMode(inputI, INPUT);
  pinMode(inputJ, INPUT);
  pinMode(inputK, INPUT);
  pinMode(inputL, INPUT);
  Gamepad.begin();

  Serial.begin(9600);
  
}

void loop() {

  //switch 1 code
  if(digitalRead(inputA) == HIGH){
    Gamepad.press(1);
    Gamepad.release(11);
  }
  if(digitalRead(inputA) == LOW){
    Gamepad.press(11);
    Gamepad.release(1);
  }

  //switch 2 code
  if(digitalRead(inputB) == HIGH){
    Gamepad.press(2);
    Gamepad.release(12);
  }
  if(digitalRead(inputB) == LOW){
    Gamepad.press(12);
    Gamepad.release(2);
  }

  //switch 3 code
  if(digitalRead(inputC) == HIGH){
    Gamepad.press(3);
    Gamepad.release(13);
  }
  if(digitalRead(inputC) == LOW){
    Gamepad.press(13);
    Gamepad.release(3);
  }

  //switch 4 code
  if(digitalRead(inputD) == HIGH){
    Gamepad.press(4);
    Gamepad.release(14);
  }
  if(digitalRead(inputD) == LOW){
    Gamepad.press(14);
    Gamepad.release(4);
  }

  //switch 5 code
  if(digitalRead(inputE) == HIGH){
    Gamepad.press(5);
    Gamepad.release(15);
  }
  if(digitalRead(inputE) == LOW){
    Gamepad.press(15);
    Gamepad.release(5);
  }

  //switch 6 code
  if(digitalRead(inputF) == HIGH){
    Gamepad.press(6);
    Gamepad.release(16);
  }
  if(digitalRead(inputF) == LOW){
    Gamepad.press(16);
    Gamepad.release(6);
  }

  //switch 7 code
  if(digitalRead(inputG) == HIGH){
    Gamepad.press(7);
    Gamepad.release(17);
  }
  if(digitalRead(inputG) == LOW){
    Gamepad.press(17);
    Gamepad.release(7);
  }

  //switch 8 code
  if(digitalRead(inputH) == HIGH){
    Gamepad.press(8);
    Gamepad.release(18);
  }
  if(digitalRead(inputH) == LOW){
    Gamepad.press(18);
    Gamepad.release(8);
  }

  //switch 9 code
  if(digitalRead(inputI) == HIGH){
    Gamepad.press(9);
    Gamepad.release(19);
  }
  if(digitalRead(inputI) == LOW){
    Gamepad.press(19);
    Gamepad.release(9);
  }

  //switch 10 code
  if(digitalRead(inputJ) == HIGH){
    Gamepad.press(20);
    Gamepad.release(30);
  }
  if(digitalRead(inputJ) == LOW){
    Gamepad.press(30);
    Gamepad.release(20);
  }

  //switch 11 code
  if(digitalRead(inputK) == HIGH){
    Gamepad.press(21);
    Gamepad.release(31);
  }
  if(digitalRead(inputK) == LOW){
    Gamepad.press(31);
    Gamepad.release(21);
  }

  //switch 12 code
  if(digitalRead(inputL) == HIGH){
    Gamepad.press(22);
    Gamepad.release(32);
  }
  if(digitalRead(inputL) == LOW){
    Gamepad.press(32);
    Gamepad.release(22);
  }
  Gamepad.write();
   
}
