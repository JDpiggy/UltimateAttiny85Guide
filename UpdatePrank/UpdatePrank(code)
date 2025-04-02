
#include "DigiKeyboard.h"
void setup () {
  pinMode(1, OUTPUT); //Turn on green light

DigiKeyboard.delay (2000) ;
DigiKeyboard. sendKeyStroke (KEY_R, MOD_GUI_LEFT) ;
DigiKeyboard.delay (600) ;
DigiKeyboard.print ("https://fakeupdate.net/win10ue/");
DigiKeyboard.delay (100) ;
DigiKeyboard. sendKeyStroke (KEY_ENTER) ;
DigiKeyboard.delay (2000) ;
DigiKeyboard. sendKeyStroke (KEY_F11) ;
DigiKeyboard.delay (3000) ;
}
void loop()  {
    digitalWrite(1, HIGH); //turn on red light when program finishes
  DigiKeyboard.delay(1300);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);

}
