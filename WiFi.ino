#include "WiFi.h"

const char* ssid = "Totalplay-ABA2";
const char* password = "ABA2FBDAAxkMTpM8";
 
void setup(){
  
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

}
 
void loop(){
  
}
