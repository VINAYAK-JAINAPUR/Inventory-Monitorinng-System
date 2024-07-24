# Inventory Monitoring System with IoT Integration

## Description
Developed an inventory monitoring system using the ESP8266 microcontroller and ultrasonic sensors to track the quantity of two different products. Integrated the system with the Blynk app for real-time data visualization and alert notifications. Added functionality to control LEDs and a buzzer based on the product quantity to indicate low inventory levels.

## Key Features
- **Real-Time Monitoring:** Utilized ultrasonic sensors to measure the distance of products and determine their quantity.
- **Blynk Integration:** Employed the Blynk platform to visualize data remotely and receive real-time updates.
- **Alerts and Notifications:** Implemented LED indicators and a buzzer to alert when inventory levels fall below a specified threshold.
- **Cloud Connectivity:** Enabled data transmission and remote monitoring via Wi-Fi.

## Components
- **Microcontroller:** ESP8266 (NodeMCU)
- **Sensors:** Ultrasonic Distance Sensors (HC-SR04)
- **Communication:** Wi-Fi
- **Cloud Platform:** Blynk
- **Additional Components:** LEDs, Buzzer
- **Programming Language:** C/C++ (Arduino IDE)

## Functionality
- **Ultrasonic Distance Measurement:** Measures distance to determine the quantity of products in stock.
- **Data Transmission:** Sends product quantity data to the Blynk app using virtual pins.
- **LED and Buzzer Alerts:** Activates LEDs and buzzer when product quantities fall below or equal to 2.

## Achievements
- **Real-Time Data Visualization:** Successfully integrated real-time data visualization and alerts using Blynk.
- **Effective Alert System:** Implemented a user-friendly alert system with LEDs and a buzzer to ensure prompt action on low inventory.
- **IoT Technologies:** Demonstrated effective use of IoT technologies for remote monitoring and control.

## Documentation

### Block Diagram
![Block Diagram]([path/to/block_diagram.png](https://github.com/VINAYAK-JAINAPUR/Inventory-Monitorinng-System/blob/main/BLock_Diagram))
*Description:* Provides a high-level overview of the system architecture and interactions between components.

### Flow Chart
![Flow Chart]([path/to/flow_chart.png](https://github.com/VINAYAK-JAINAPUR/Inventory-Monitorinng-System/blob/main/Flowchart.jpeg))
*Description:* Illustrates the logical flow of the system, from measuring product distances to processing data and triggering alerts.

### Hardware Design
![Hardware Design](path/to/hardware_design.png)
*Description:* Details the schematic diagram and connections between the ESP8266, sensors, LEDs, and buzzer.

### Hardware Setup
![Hardware Setup](path/to/hardware_setup.png)
*Description:* Shows the physical arrangement of components on a breadboard or similar setup, including wiring details.

### IoT Cloud
![IoT Cloud](path/to/iot_cloud.png)
*Description:* Explains the integration with Blynk for data visualization and remote monitoring.

### Results
![Results](path/to/results.png)
*Description:* Summarizes the outcomes of the project, including system performance, effectiveness of alerts, and real-time monitoring.

## License
[Include your license information here, if applicable]
