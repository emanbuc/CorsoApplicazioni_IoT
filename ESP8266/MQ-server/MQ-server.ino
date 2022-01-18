#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#ifndef STASSID
#define STASSID "WIFI SSID"
#define STAPSK  "WIFI PASSWORD"
#endif

const char* ssid = STASSID;
const char* password = STAPSK;

 int analog_gas_out;
 bool digital_gas_out;

ESP8266WebServer server(80);

const int led = LED_BUILTIN;

void handleRoot() {
  digitalWrite(led, 1);
  server.send(200, "text/plain", "hello from esp8266!\r\n");
  digitalWrite(led, 0);
}

void handleNotFound() {
  digitalWrite(led, 1);
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
  digitalWrite(led, 0);
}

void setup(void) {

  pinMode(A0,INPUT);
  pinMode(D2,INPUT);
  
  pinMode(led, OUTPUT);
  digitalWrite(led, 0);
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);

  server.on("/inline", []() {
    server.send(200, "text/plain", "this works as well");
  });

  server.on("/gas", []() {
    char buff[50];
    sprintf(buff, "Livello GAS A0: %d",analog_gas_out);

    Serial.println("DEBUG ==================");
    Serial.print(buff);      
    Serial.println("DEBUG ==================");
      
    server.send(200, "text/plain", buff);
  });

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}

void loop(void) {
  server.handleClient();
  MDNS.update();

  analog_gas_out =analogRead(A0);
  digital_gas_out=digitalRead(D2);
  Serial.print("analog_gas_out analog read value: ");
  Serial.println(analog_gas_out);
  Serial.print("digital_gas_out: ");
  Serial.println(digital_gas_out);
}
