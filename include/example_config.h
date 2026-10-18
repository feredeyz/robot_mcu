#pragma once // Защита от повторного включения этого файла компилятором

// Настройки Wi-Fi
constexpr const char* WIFI_SSID = ""; // Название сети
constexpr const char* WIFI_PASSWORD = ""; // Пароль сети
constexpr unsigned long WIFI_TIMEOUT_MS = 10000;        // Сколько миллисекунд ждать подключения

// Настройки сервера
constexpr int SERVER_PORT = 80; // Порт, на котором будет запущен сервер