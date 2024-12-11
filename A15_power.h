#pragma once

#define _5V 255
#define _4V 204
#define _3V 153
#define _2V 102
#define _1V 51
#define GND 0

class A15Power {
  public:
    A15Power(uint8_t pin, uint8_t volts = GND) {
      _pin = pin;
      _volts = volts;
      pinMode(_pin, OUTPUT);
      analogWrite(_pin, _volts);
    }

    void setVolts(uint8_t volts1) {
      analogWrite(_pin, volts1);
    }

    void returnVolts() {
      analogWrite(_pin, _volts);
    }
  private:
    uint8_t _pin;
    uint8_t _volts;
};