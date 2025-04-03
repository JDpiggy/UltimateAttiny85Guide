 
#include "DigiKeyboard.h"
void setup () {
  pinMode(1, OUTPUT); //Turn on green light

DigiKeyboard.delay (2000) ;
DigiKeyboard. sendKeyStroke (KEY_R, MOD_GUI_LEFT) ;
DigiKeyboard.delay (600) ;
DigiKeyboard.print ("INSERT FILE LINK HERE");
DigiKeyboard.delay (100) ;
DigiKeyboard. sendKeyStroke (KEY_ENTER) ;
DigiKeyboard.delay (2000) ;
// Print document
    DigiKeyboard.sendKeyStroke(KEY_P, MOD_CONTROL_LEFT);  // Ctrl + P
    DigiKeyboard.delay(1000);
    
    // Confirm print
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop()  {
    digitalWrite(1, HIGH); //turn on red light when program finishes
  DigiKeyboard.delay(1300);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(1000);

}
