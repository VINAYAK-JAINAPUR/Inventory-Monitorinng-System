#define BLYNK_TEMPLATE_ID "TMPL35o-mUexe"
#define BLYNK_TEMPLATE_NAME "INVENTORY MONITORING"
#include <Blynk.h>

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YG5aGcRqdVmXOwFC0PG-or1ctXYOrOgG"; 

const char *ssid = "Rzzzz";    // WiFi Name
const char *pass = "Rajesh@2003"; // WiFi Password

#define echoPinProduct1 D2
#define trigPinProduct1 D4
#define ledPinProduct1 D5

#define echoPinProduct2 D6
#define trigPinProduct2 D8
#define ledPinProduct2 D7

long durationProduct1, distanceProduct1;
long durationProduct2, distanceProduct2;

int productValue1 = 0;
int productValue2 = 0;

BlynkTimer timer;

void setup() {
  Serial.begin(9600);
  pinMode(trigPinProduct1, OUTPUT);
  pinMode(echoPinProduct1, INPUT);
  pinMode(ledPinProduct1, OUTPUT);

  pinMode(trigPinProduct2, OUTPUT);
  pinMode(echoPinProduct2, INPUT);
  pinMode(ledPinProduct2, OUTPUT);

  Serial.println("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(550);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");

  Blynk.begin(auth, ssid, pass);

  timer.setInterval(1000L, MeasureAndSendData);
}

void loop() {
  Blynk.run();
  timer.run();
}

void MeasureAndSendData() {
  MeasureProduct1();
  MeasureProduct2();
}

void MeasureProduct1() {
  digitalWrite(trigPinProduct1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinProduct1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinProduct1, LOW);

  durationProduct1 = pulseIn(echoPinProduct1, HIGH);
  distanceProduct1 = durationProduct1 / 58.2;

  productValue1 = getProductValue(distanceProduct1);
  Serial.print("Product1: ");
  Serial.println(productValue1);

  Blynk.virtualWrite(V0, productValue1); // V0 is the virtual pin number on Blynk for ultrasonic sensor 1

  controlLED(ledPinProduct1, V2, productValue1);
}

void MeasureProduct2() {
  digitalWrite(trigPinProduct2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinProduct2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinProduct2, LOW);

  durationProduct2 = pulseIn(echoPinProduct2, HIGH);
  distanceProduct2 = durationProduct2 / 58.2;

  productValue2 = getProductValue(distanceProduct2);
  Serial.print("Product2: ");
  Serial.println(productValue2);

  Blynk.virtualWrite(V1, productValue2); // V1 is the virtual pin number on Blynk for ultrasonic sensor 2

  controlLED(ledPinProduct2, V3, productValue2);
}

int getProductValue(long distance) {
  if (distance < 10) {
    return 5;
  } else if (distance >= 10 && distance < 20) {
    return 4;
  } else if (distance >= 20 && distance < 30) {
    return 3;
  } else if (distance >= 30 && distance < 40) {
    return 2;
  } else if (distance >= 40 && distance < 50) {
    return 1;
  } else {
    return 0;
  }
}

void controlLED(int ledPin, int virtualPin, int productValue) {
  Blynk.virtualWrite(virtualPin, productValue <= 2 ? HIGH : LOW); // Turn on or off LED in Blynk app based on conditions
  if (productValue <= 2) {
    blinkLED(ledPin);
  }
}

void blinkLED(int ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(500); 
  digitalWrite(ledPin, LOW);
}
