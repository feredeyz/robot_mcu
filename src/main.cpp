#include <Arduino.h>
#include "wifi/connection.h"
#include "server/routes.h"
#include "config.h" // Подключаем данные из файла настройки

// Инициализация сервера на заданном порту
AsyncWebServer server(SERVER_PORT);

// Функция для инициализации компонентов робота. Запускается только 1 раз
void setup() {
    Serial.begin(115200);
    
    // Попытка подключения к Wi-Fi
    if (initWiFi()) {
        // Если подключение успешно
        registerRoutes(); // Подключение маршрутов к серверу
        server.begin(); // Запуск сервера
        Serial.print("Сервер запущен на порту ");
        Serial.println(SERVER_PORT);
    }
}

// Цикл программы робота
void loop() {
}