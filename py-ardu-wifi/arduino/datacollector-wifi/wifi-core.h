#ifndef WIFIUTILS
#define WIFIUTILS

#include <WiFiNINA.h>

// char ssid[] = "wifiFromNapoli";
// char pass[] = "forzanapo";
// char ssid[] = "wifiFromLibanon";
// char pass[] = "libanonnumba1";
char ssid[] = "AAAAAAARGHHHHHHHA";
char pass[] = "wordpass12";

WiFiServer server(3435);
WiFiClient client = server.available();
int status = WL_IDLE_STATUS; // wifi status

int8_t rssiCnt;
char SSIDs[25][20];
int32_t RSSIs[25];

void enable_WiFi();
void connect_WiFi();
void disconnect_WiFi();
void startTCPServer();


void scanRSSIs();
void fillRssiData();

void rttTest();

void startCommandCenter();

void printWifiData();

#endif