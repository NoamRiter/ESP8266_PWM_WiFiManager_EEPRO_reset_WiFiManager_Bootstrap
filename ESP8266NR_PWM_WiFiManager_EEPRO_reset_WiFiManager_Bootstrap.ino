#include <EEPROM.h>
#include <ArduinoJson.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiClient.h>
#include <WiFiManager.h>     // https://github.com/tzapu/WiFiManager
#include <DNSServer.h>

const char *ssid      = "your_ssid"; //empty
const char *password  = "your_password";  //empty

String webSite,javaScript,XML;

int pwm5 = 0;
int pwm6 = 0;
int pwm7 = 0;
int pwm8 = 0;
int pwm9 = 0;

String passw = "z";
bool rightPassword = false;
String year = "2017";
String refreshPage = "45";
String mainHeading   = "Noams ESP experiment";
String subHeading    = "Everything is coming to you from 4MB memory device";
String menuName = "ESP8266";
String title     = "Esp8266 by Noam";
String copyrights = "SystemArt";
String webpage       = ""; //init webpage
String Email = "noamriter@hotmail.com";
int port = 80; // Change the port to the one you open
String IpAddress = "192.168.1.179:" + (String)port; //change it to your public/lokal IP ends with :. Open a rout/port on your ESP in router (TCP/UDP), Change the port to the one you open
int openWifiManager;

ESP8266WebServer server(port);
void setup()
{
  pinMode(14,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

  analogWrite(5, 0);
  analogWrite(0, 0);
  analogWrite(2, 0);
  analogWrite(12, 0);
  analogWrite(13, 0);

  Serial.begin(115200);
  EEPROM.begin(500);
  int openWifiManager = EEPROM.read(35);
  Serial.println(openWifiManager);
  WiFiManager wifiManager;
 if(openWifiManager == 1)
     {
      wifiManager.resetSettings();
      EEPROM.write(35, 0);
      EEPROM.commit();
     }
  wifiManager.setTimeout(30);
  if(!wifiManager.autoConnect("Noams ESP!")) {
    Serial.println("failed to connect and timeout!");
    delay(5000);
    ESP.reset(); 
    delay(150000);
  }
  Serial.println("WiFi connected!");
  server.begin(); 
  Serial.println("Webserver started!"); 
  Serial.println("Your local IP address: http://"+WiFi.localIP().toString()+":" + port);  // Print local IP address
  Serial.println("Your divice IP address: http://"+ IpAddress +":" + port);  // Print divice variable IP address.
  
  server.on("/",         Product); // IP/
  server.on("/homepage", homepage);   // IP/homepage
  server.on("/Product", Product);      // IP/Product
  server.on("/Portfolio", Portfolio);      // IP/Portfolio
  server.on("/Services", Services);      // IP/Services
  server.on("/Aboutus", Aboutus);      // IP/Aboutus
  server.on("/Contact", Contact);      // IP/Contact
  server.on("/RestartWifiManager", RestartWifiManager);     //IP/RestartWifiManager
  server.on("/PinValue", PinValue);  //IP/PinValue
  server.on("/Password", Password);  //IP/PasswordValue
}

void loop() {
  server.handleClient();
  ESPDelay(500); // delay for the system to not crush
}

void ESPDelay(int ms) 
{
 int i;
 for(i=1;i!=ms;i++) 
   {
     delay(1);
    if(i%100 == 0) 
    {
       ESP.wdtFeed(); 
       yield();
    }
  }
}
