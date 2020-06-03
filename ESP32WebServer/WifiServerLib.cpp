#include "WifiServerLib.h"

void WClass::connectToWifi()
{
  WiFi.enableSTA(true);
  delay(2000);
  WiFi.begin(_ssid,_password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}
