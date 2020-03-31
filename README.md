# Antdrive
Magnettic loop antenna driver arduino shield for amateur radio HF

## Notes
Only one limit switch is pinned out as my setup limits torque such that the capacitor cannot be damaged on the other end. If using standard ethernet cable, you have another two lines (one twisted pair) that can be used for additional switches and signaling however.  I may add this at some point but I'm currently focused on other projects.

## Parts

Designed for the Pololu #1208 stepper motor (https://www.pololu.com/product/1208).  While only rated for 10V it has no issues running at >15v for tuning as the Arduino sketch keeps the motor powered off when not rotating to minimize EMI.  The mounting hardware I used is also available from Pololu.

The motor driver module is an A4988 based board also from Pololu (https://www.pololu.com/product/1182).  In theory it should be able to handle much larger stepper motors, 2A per phase and 35V.

Misc drive hardware is as follows:
https://www.amazon.com/gp/product/B07RXJ5GVG/  Drive side pulley
https://www.amazon.com/gp/product/B07W5L6G8L/  Capacitor side pulley
https://www.amazon.com/gp/product/B07KK86NYX/  Note: I've found these belts to be free of metalic strapping which is important for preventing arcing between the capacitor and the motor

