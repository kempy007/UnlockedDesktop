// import boards http://digistump.com/package_digistump_index.json 
// https://github.com/digistump/DigistumpArduino/releases
// Install the drivers, then pull in the arduino devices.
// Set board to 'Digispark (Default 16.5mhz), programmer 'micronucleus'

#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  delay(random(1000,60000));
}
