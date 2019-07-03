#pragma once
#include <WiFiClientSecureAxTLS.h>
//Google firebase fingerprint(~2019.7.3~?)
const char* fingerprint = "B6:F5:80:C8:B1:DA:61:C1:07:9D:80:42:D8:A9:1F:AF:9F:C8:96:7D";
#define PORT 443
axTLS::WiFiClientSecure client;
typedef String Json;
Json json;
#include "FirebaseJson.hpp"