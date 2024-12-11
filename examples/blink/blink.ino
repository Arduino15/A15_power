#include <A15_power.h>
A15Power pin(3);

void setup() {
}

void loop() {
  pin.setVolts(_5V);
  delay(1000);
  pin.returnVolts();
  delay(1000);
  pin.setVolts(_4V);
  delay(1000);
  pin.returnVolts();
  delay(1000);
  pin.setVolts(_3V);
  delay(1000);
  pin.returnVolts();
  delay(1000);
  pin.setVolts(_2V);
  delay(1000);
  pin.returnVolts();
  delay(1000);
  pin.setVolts(_1V);
  delay(1000);
  pin.returnVolts();
  delay(1000);
}
