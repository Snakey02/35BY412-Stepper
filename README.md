# 35BY412 Stepper Motor Library
The 35BY412 stepper motor is relatively unsupported and is quite hard to find any details about it at all. It is mainly available from [eBay sellers](https://www.ebay.co.uk/sch/35BY412%20stepper%20motor) and is often connected in a pair.
\![Stepper Set 2](https://github.com/Snakey02/35BY412-Stepper/blob/master/Assets/Steppers%20Set%202.jpg "Truth Table")
## Diagrams
* Truth Table - ![alt text](https://github.com/Snakey02/35BY412-Stepper/blob/master/Diagrams/Truth%20Table.jpg)
* Schematic of the 35BY412-Stepper Motor connected to the [X113647 Stepper Shield](https://github.com/tardate/X113647Stepper) and Arduino Uno - ![Arduino, Shield, Stepper](https://github.com/Snakey02/35BY412-Stepper/blob/master/Diagrams/Ardunio%2C%20Shield%2C%20Stepper.jpg)
## Example Programs
Here are a few custom programs written for the 35BY412 Stepper Motor and [X113647 Stepper Shield](https://github.com/tardate/X113647Stepper):
* [StepperTruthTableArduino](https://github.com/Snakey02/35BY412-Stepper/tree/master/Examples/StepperTruthTableArduino) - Basic example of the stepper truth table running in a loop, rotating the stepper clockwise. This program is written for the Arduino Duemilanove.
* [StepperTruthTableNodeMCU](https://github.com/Snakey02/35BY412-Stepper/tree/master/Examples/StepperTruthTableNodeMCU) - Basic example of the stepper truth table running in a loop, rotating the stepper clockwise. This program is written for the Node MCU.
* [StepperTruthTableD1](https://github.com/Snakey02/35BY412-Stepper/tree/master/Examples/StepperTruthTableD1) - Basic example of the stepper truth table running in a loop, rotating the stepper clockwise. This program is written for the Wemos D1 Mini.
## Credits and References
* [X113647 Stepper Shield](https://github.com/tardate/X113647Stepper) - By Paul Gallagher
* [NodeMCU Pinout](https://github.com/esp8266/Arduino/blob/master/variants/nodemcu/pins_arduino.h#L37-L59) - By Kristian Sloth Lauszus
