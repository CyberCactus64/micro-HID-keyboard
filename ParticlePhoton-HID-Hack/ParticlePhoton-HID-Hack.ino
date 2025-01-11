#include "Particle.h"

// UNCOMMENT ONLY BEFORE TESTING THE CODE: this will disconnect the device from cloud
// SYSTEM_MODE(SEMI_AUTOMATIC);

STARTUP(Keyboard.begin());

void setup() {
    delay(100);
    const char pwrshell[] = "cmd\n";
    const char command[] = "start chrome example.com\n";

    // open terminal
    Keyboard.press(KEY_LEFT_WINDOWS);
    Keyboard.write("r");
    Keyboard.releaseAll();
    delay(100);
    for (int i = 0; i < strlen(pwrshell); i++) {
        Keyboard.write(pwrshell[i]);
    }

    delay(500); // a little delay
    
    // write in the terminal
    for (int i = 0; i < strlen(openchrome); i++) {
        Keyboard.write(command[i]);
    }
}