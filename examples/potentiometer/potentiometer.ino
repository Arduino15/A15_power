#include <A15_power.h>
A15Power pin(3);

void setup() {
}

void loop() {
  uint8_t bright = analogRead(A0);
  pin.setVolts(bright);
}
