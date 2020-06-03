#include <WiFi.h>
#include <WiFiClient.h>

class WClass
{
  public:
    WClass(const char* ssid, const char* password) : _ssid(ssid) , _password(password){ Serial.begin(9600); }
    void connectToWifi();
  private:
    const char* _ssid;
    const char* _password;
};
