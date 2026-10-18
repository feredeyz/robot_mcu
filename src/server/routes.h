#pragma once
#include <ESPAsyncWebServer.h>

extern AsyncWebServer server;

void handleStatus(AsyncWebServerRequest *request);

void handleNotFound(AsyncWebServerRequest *request);

void registerRoutes();