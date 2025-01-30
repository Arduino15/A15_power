# A15_power
крутая библиотека для питания мало потребляемой периферии от цифровых(PWM) выходов Arduino/esp!
## подключение и инициализация
```cpp
#include <A15_power.h> // подключение
A15Power pin(выход, напряжение); // класс и обьект
```
## константы
```cpp
_5V // 5 вольт
_4V // 4 вольта
_3V // 3 вольта
_2V // 2 вольта
_1V // 1 вольт
GND // 0 вольт (gnd)
```
## функции
```cpp
setVolts(напряжение); // установить новое напряжение на выходе, который был указан в классе
returnVolts(); // вернёт напряжение, которое было указано в классе
```
## пример
```cpp
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
```
больше примеров есть в папке examples!
## баги и обратная связь
если нашли баг создвайте Issue, а лучше сразу пишите [мне](https://t.me/AWNDtop)
