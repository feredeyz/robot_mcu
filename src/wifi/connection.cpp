#include <WiFi.h>
#include <Arduino.h>
#include "config.h"

bool initWiFi() {
    Serial.println("Подключение к Wi-Fi...");
    
    // Подключение к Wi-Fi
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    if (WiFi.waitForConnectResult(WIFI_TIMEOUT_MS) == WL_CONNECTED) { // Ожидание результата подключения
        // Если подключение успешно
        Serial.println("\nПодключение успешно");
        Serial.print("IP-адрес робота: ");
        Serial.print(WiFi.localIP()); // Вывод IP-адреса робота внутри сети для подключения
        Serial.print("\n");
        return true; // Возвращаем true, так как подключение успешно
    }
    else {
        // Если подключиться не удалось, говорим об этом и даём советы по решению проблемы
        Serial.println("\nОшибка подключения. Проверьте правильность указанных названия сети и пароля");
        return false; // Возвраащем false, так как подключиться не удалось
    }
}