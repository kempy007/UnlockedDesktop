// import boards http://digistump.com/package_digistump_index.json 
// https://github.com/digistump/DigistumpArduino/releases
// Install the drivers, then pull in the arduino devices.
// Set board to 'Digispark (Default 16.5mhz), programmer 'micronucleus'

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  DigiMouse.moveY(10); //down 10
  DigiMouse.delay(500);
  DigiMouse.moveX(20); //right 20
  DigiMouse.delay(500);
  delay(random(500,15000));
  DigiMouse.scroll(5);
  DigiMouse.delay(500);
  delay(random(500,15000));
  DigiMouse.scroll(-5);
  delay(random(500,15000));
}
