#include <Keyboard.h>

void setup() {
    Keyboard.begin();
    delay(600); // wait for the computer to recognize the keyboard

    // simulate pressing Win + R to open the "Run" dialog
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(100);
    Keyboard.releaseAll();

    delay(500); // wait for the "Run" dialog to open

    // type "cmd" to open the terminal
    Keyboard.print("cmd");
    Keyboard.write(KEY_RETURN);

    // write a command in the terminal
    Keyboard.print("start chrome example.com");
    Keyboard.write(KEY_RETURN);

    Keyboard.end();
}

void loop() { }
