# Fake USB Using a Microcontroller as an HID Keyboard

This project demonstrates how to use some of the most popular microcontrollers as an HID **Keyboard** to send predefined commands to a connected computer.

### Disclaimer:
This project is strictly intended for **educational purposes only** to help understand how fake usb from hackers operate.  
Misusing this code for malicious purposes is both illegal and unethical!  

### What the Code Does:
1. Simulates the `WIN + R` key combination to open the "Run" dialog on Windows.
2. Sends a command to open the terminal (`cmd`).
3. Executes a command in the terminal to launch a specific URL in Chrome.

### Hardware Requirements:
- A microcontroller that supports HID functionality, such as:
  - **Arduino Leonardo**, **Arduino Micro**, ([See the list of compatible Arduino devices here](https://docs.arduino.cc/libraries/keyboard/)).
  - **ESP32** development board (only ESP32S2 and ESP32S3 support HID functionality).
  - **Particle Photon** (See Particle Photon here](https://docs.particle.io/photon/)).

### Software Requirements:
- **Arduino IDE** (or alternatives like PlatformIO).
- **Keyboard Library** (for Arduino devices).
- **HID Keyboard Library** ([ESP32 Keyboard Library](https://github.com/espressif/arduino-esp32/tree/master)) (for ESP32 devices)

### Notes:
- This proof of concept assumes the target machine is running Windows and has Google Chrome installed.
- The example URL (`example.com`) is used to demonstrate functionality and can be replaced with any valid URL.
- Feel free to modify the command prompt, update the link, or add additional functionalities.
