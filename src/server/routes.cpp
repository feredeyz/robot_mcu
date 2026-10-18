#include <ESPAsyncWebServer.h>
#include "routes.h"

void handleStatus(AsyncWebServerRequest *request) {
    // Функция-обработчик для проверки статуса соединения робота с узлом управления
    request->send(200, "text/plain", "Ok");
}

void handleNotFound(AsyncWebServerRequest *request) {
    // Функция-обработчик для неизвестных маршрутов. Возвращает код ошибки 404 (Маршрут не найден).
    request->send(404, "text/plain", "Error 404: Route not found");
}

void registerRoutes() {
    // Функция регистрации маршрутов для их последующей обработки сервером
    server.on("/status", HTTP_GET, handleStatus);
    server.onNotFound(handleNotFound);
}