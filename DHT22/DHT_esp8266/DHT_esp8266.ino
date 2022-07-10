/*  DHT11/ DHT22 Sensor Temperature and Humidity Tutorial
 *  Program made by M V Subrahmanyam,
 *  www.electronicsinnovation.com
 */
/*
 * You can find the DHT Library from Arduino official website
 * https://playground.arduino.cc/Main/DHTLib
 */
    #include<DHT.h>
    #define dataPin D6 // Defines pin number to which the sensor is connected
    DHT dht(DHTPIN, DHTTYPE)
    void setup() {
      Serial.begin(9600);
      pinMode(D5,OUTPUT);
      pinMode(D7,OUTPUT);
      digitalWrite(D5,HIGH);
      digitalWrite(D7,LOW);
    }
    void loop() {
      int readData = DHT.read22(dataPin); // Reads the data from the sensor
      float t = DHT.temperature; // Gets the values of the temperature
      float h = DHT.humidity; // Gets the values of the humidity
      
      // Printing the results on the serial monitor
      Serial.print("Temperature = ");
      Serial.print(t);
      Serial.print(" *C ");
      Serial.print("    Humidity = ");
      Serial.print(h);
      Serial.println(" % ");
      
      delay(2000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
    }


    #include <ESP8266WiFi.h>
