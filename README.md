Project: Inventory Monitoring System with IoT Integration
Description:
Developed an inventory monitoring system using the ESP8266 microcontroller and ultrasonic sensors to track the quantity of two different products. Integrated the system with the Blynk app for real-time data visualization and alert notifications. Added functionality to control LEDs and a buzzer based on the product quantity to indicate low inventory levels.

Key Features:

Real-Time Monitoring: Utilized ultrasonic sensors to measure the distance of products and determine their quantity.
Blynk Integration: Employed the Blynk platform to visualize data remotely and receive real-time updates.
Alerts and Notifications: Implemented LED indicators and a buzzer to alert when inventory levels fall below a specified threshold.
Cloud Connectivity: Enabled data transmission and remote monitoring via Wi-Fi.
Technologies Used:

Microcontroller: ESP8266 (NodeMCU)
Sensors: Ultrasonic Distance Sensors (HC-SR04)
Communication: Wi-Fi
Cloud Platform: Blynk
Components: LEDs, Buzzer
Programming Language: C/C++ (Arduino IDE)
Functionality:

Ultrasonic Distance Measurement: Measured distance to determine the quantity of products in stock.
Data Transmission: Sent product quantity data to the Blynk app using virtual pins.
LED and Buzzer Alerts: Activated LEDs and buzzer when product quantities were less than or equal to 2.
Email Notifications: Configured to send email alerts when inventory levels were low (integrated via additional services if applicable).
Achievements:

Successfully integrated real-time data visualization and alerts using Blynk.
Implemented a user-friendly alert system with LEDs and a buzzer to ensure prompt action on low inventory.
Demonstrated effective use of IoT technologies for remote monitoring and control.
