#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(1000); // Give time for system to recognize device

    // Open browser (Win+R -> Edge -> Enter)
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("https://drive.google.com/file/d/1mtiakRFHga3wlYFHy7wO-DtiQwu9PW88/view");
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3000);
    // Navigate to Google Drive link (replace with actual link)

    // Close browser (Alt+F4)
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(1000);
    
    // Open Mouse Settings (Win+I -> tab to mouse -> Enter)
    DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("mouse");
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50); 
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);

    
    // Navigate to Pointers tab
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
    DigiKeyboard.delay(200);

    //open the thingy
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50); 
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);

    //find and select the file
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
    DigiKeyboard.print("mousereplaceme");
    DigiKeyboard.delay(100);    
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    
    DigiKeyboard.delay(50);
    DigiKeyboard.delay(1000);
    

    //apply change
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5000);

    // Close settings (Alt+F4)
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(1000);

}


void loop() {
  //light up the red light
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(1300);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
  }
