#include<ESP8266WiFi.h>//only to use iot(internet)
#include<ThingSpeak.h>
WiFiClient
client;
const char* ssid="Make Skilled Innovations";
const char* password="Makeskilled@1234";
const char* apikey="B0WNS6PBX01CUZBH";
const int channelid=2156337;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(20000);
WiFi.mode(WIFI_STA);
WiFi.begin(ssid,password);
while(WiFi.status()!=WL_CONNECTED){
  Serial.print(".");
  delay(1000);
}
Serial.println("connected");
ThingSpeak.begin(client);
pinMode(D0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=ThingSpeak.readIntField(channelid,1);
Serial.println(value);
delay(15000);
if(value<0)
{
 digitalWrite(D0,1);
  
}
else{
  digitalWrite(D0,0);
}
}
