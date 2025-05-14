#include <SoftwareSerial.h>
#include <TinyGPS++.h>

// Define the GPS module connection
SoftwareSerial gpsSerial(0, 1); // RX, TX (Arduino Pins 0 and 1)
TinyGPSPlus gps;                 // GPS library instance

const long BAUD_RATE = 9600;     // GPS module and Serial Monitor baud rate
const int BUZZER_PIN = 8;  3w      // Buzzer connected to Digital Pin 8

// Variables for range checking
float homeLatitude = 0.0;
float homeLongitude = 0.0;
bool isHomeSet = false;
String gpsUrl = "";

void setup() {
    Serial.begin(BAUD_RATE);     // Initialize Serial Monitor
    gpsSerial.begin(BAUD_RATE);  // Initialize GPS Serial communication
    pinMode(BUZZER_PIN,  OUTPUT); // Initialize Buzzer pin
    Serial.println("Acquiring initial GPS coordinates. Please wait...");
}

void loop() {
    while (gpsSerial.available() > 0) {
        if (gps.encode(gpsSerial.read())) {
            if (gps.location.isValid()) {
                float latitude = gps.location.lat();
                float longitude = gps.location.lng();

                if (!isHomeSet) {
                    homeLatitude = latitude;
                    homeLongitude = longitude;
                    isHomeSet = true;
                    gpsUrl = "https://www.google.com/maps?q=" + String(homeLatitude, 6) + "," + String(homeLongitude, 6);
                    Serial.println("Home location set to:");
                    Serial.print("Latitude: "); Serial.println(homeLatitude, 6);
                    Serial.print("Longitude: "); Serial.println(homeLongitude, 6);
                    Serial.print("Google Maps URL: "); Serial.println(gpsUrl);
                }

                // Calculate the distance from the initial (home) location
                float distanceToHome = TinyGPSPlus::distanceBetween(latitude, longitude, homeLatitude, homeLongitude);

                Serial.println("=== GPS Data ===");
                Serial.print("Latitude: "); Serial.println(latitude, 6);
                Serial.print("Longitude: "); Serial.println(longitude, 6);
                Serial.print("Distance to Home: "); Serial.print(distanceToHome); Serial.println(" m");

                if (distanceToHome > 10.0) { // Check if outside 10-meter range
                    Serial.println("Out of Range! Buzzer Activated");
                    digitalWrite(BUZZER_PIN, HIGH); // Turn on buzzer
                } else {
                    digitalWrite(BUZZER_PIN, LOW); // Turn off buzzer
                }
                Serial.println("================");
            } else {
                Serial.println("Waiting for valid GPS signal...");
            }
        }
    }
}



