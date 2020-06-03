#include "WifiServerLib.h"
#include <WebServer.h>
#include "Pages.h"

void beginServer();
void handleRoot();
void handleSubmit();
String getPage();

WebServer server (80);

const int LedPort [] = {25,26,27};
const char* ssid = "LAPTOP-B2NH8UJ5 6010";
const char* password = "Laptop1234";

WClass WS (ssid,password);

void setup() {
  for(int i = 0; i < 3; i++) {
    pinMode(LedPort[i],OUTPUT);
    digitalWrite(LedPort[i],true);
  }
  Serial.begin(9600);
  WS.connectToWifi();
  beginServer();
}

void loop() {
  server.handleClient();
  delay(1000);
}

void beginServer()
{
  server.on ( "/", handleRoot );
  server.begin();
  Serial.println ( "HTTP server started" );
}

void handleRoot(){ 
  if ( server.hasArg("LED1") && server.hasArg("LED2") && server.hasArg("LED3") ) {
    handleSubmit();
  } else {
    server.send ( 200, "text/html", pages::FirstPage() );
  }  
}

void handleSubmit() {
  digitalWrite(LedPort[0],!(server.arg("LED1")=="1"));
  digitalWrite(LedPort[1],!(server.arg("LED2")=="1"));
  digitalWrite(LedPort[2],!(server.arg("LED3")=="1"));
  Serial.println(server.arg("LED1"));
  Serial.println(server.arg("LED2"));
  Serial.println(server.arg("LED3"));
  server.send ( 200, "text/html", pages::FirstPage() );
}
