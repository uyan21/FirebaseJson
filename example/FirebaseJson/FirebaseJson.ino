/*
	Name:       FirebaseJson.ino
	Created:	2019-07-03 오후 4:28:42
	Author:     DESKTOP-J2RNHIB\yeondeok
*/
#include <ESP8266WiFi.h>
#include "FirebaseJson.h"
const char* ssid = "YOURSSID";
const char* pswd = "YOURPASSWORD";
const char* server = "YOURFB.firebaseio.com";
const char* AccessToken = "YOURSERVERKEY";
FirebaseJson fbj(server, AccessToken);
Json jsondata;
void setup()
{
	Serial.begin(115200);
	WiFi.begin(ssid, pswd);
	Serial.println();
	while (WiFi.status() != WL_CONNECTED) {
		Serial.print(".");
		delay(400);
	}
	Serial.println();
	Serial.print("Connected : ");
	Serial.println(WiFi.localIP());
}

void loop()
{
	String key = "example";
	int val = 0;
	fbj.SetJson(key, val);
	if (fbj.ReadytoSend()) {
		fbj.Send("POST", "/YOURURI");
		delay(500);
	}

}
