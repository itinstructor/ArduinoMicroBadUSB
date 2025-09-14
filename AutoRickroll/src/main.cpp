// Include the Arduino library - provides basic Arduino functions like delay()
#include <Arduino.h>
// Include the Keyboard library - allows the Arduino to act like a USB keyboard
#include <Keyboard.h>

// setup() function runs once when the Arduino starts up
void setup()
{
  // Wait 3 seconds (3000 milliseconds) for the computer to recognize the Arduino
  delay(3000); // Wait for the system to be ready

  // Initialize the keyboard functionality - tells the computer this device can send keystrokes
  Keyboard.begin();

  // Open Run dialog (Win + R) - this is a Windows shortcut to open the "Run" window
  // Press and hold the Windows key (also called GUI key or Super key)
  Keyboard.press(KEY_LEFT_GUI);

  // Press and hold the 'r' key while Windows key is still pressed
  Keyboard.press('r');

  // Wait 100 milliseconds to ensure both keys register/rickroll/rickroll.mp4 properly
  delay(100);

  // Release all currently pressed keys (Windows + R)
  Keyboard.releaseAll();

  // Wait 500 milliseconds for the Run dialog to fully open
  delay(500);

  // Type the command that will open Chrome with a specific URL
  // This types the text as if a human was typing it
  Keyboard.print(
      "chrome https://shattereddisk.github.io/rickroll/rickroll.mp4");

  // Wait 200 milliseconds to ensure the text is fully typed
  delay(200);

  // Press Enter key to execute the command we just typed
  Keyboard.press(KEY_RETURN);

  // Wait 100 milliseconds to ensure the Enter key registers
  delay(100);
  // Release the Enter key (good practice to release keys after pressing them)
  Keyboard.releaseAll();

  // End keyboard functionality - clean up and stop acting like a keyboard
  Keyboard.end();
}

// loop() function runs continuously after setup() finishes
void loop()
{
  // Nothing here - we don't want to repeat the rickroll action
  // Wait 1000 milliseconds (1 second) before the next loop iteration
  delay(1000); // Added delay to prevent busy loop.
               // The main functionality is in the setup function.
               // This prevents the Arduino from using unnecessary CPU cycles
}