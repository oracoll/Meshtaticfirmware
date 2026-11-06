#pragma once

// ==============================================================================
// Hardware Pin Configuration (Easily editable at the top)
// ==============================================================================

// LoRa SPI Bus Pins
#define PIN_LORA_SCK 18
#define PIN_LORA_MISO 19
#define PIN_LORA_MOSI 23

// LoRa Control Pins (Ebyte E22P-868M30S / SX1262)
#define PIN_LORA_CS 5       // NSS / Chip Select
#define PIN_LORA_RESET 4    // NRST / Reset
#define PIN_LORA_BUSY 27    // BUSY
#define PIN_LORA_DIO1 26    // DIO1 / IRQ
#define PIN_LORA_EN 14      // Module Enable / Power (pulled HIGH to enable)
#define PIN_LORA_TR_CTRL 12 // RF Switch T/R Control (HIGH = TX, LOW = RX)

// I2C Screen Pins
#define PIN_I2C_SDA 21
#define PIN_I2C_SCL 22

// GPS Module Serial Pins (ESP32 RX2 connected to GPS TX, TX2 connected to GPS RX)
#define PIN_GPS_RX 16
#define PIN_GPS_TX 17

// ==============================================================================
// Display Model Selection (Uncomment ONE of the following)
// ==============================================================================
#define USE_SSD1306 // Default: 0.96" OLED (SSD1306)
// #define USE_SH1106   // 1.3" OLED (SH1106)

#define HAS_SCREEN 1
#define I2C_SDA PIN_I2C_SDA
#define I2C_SCL PIN_I2C_SCL

// ==============================================================================
// GPS Configuration
// ==============================================================================
#define HAS_GPS 1
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN PIN_GPS_RX
#define GPS_TX_PIN PIN_GPS_TX

// ==============================================================================
// LoRa Configuration (Meshtastic Standard & Custom Macros)
// ==============================================================================
#define USE_SX1262

// Standard Meshtastic LoRa SPI & Control Pin definitions
#define LORA_SCK PIN_LORA_SCK
#define LORA_MISO PIN_LORA_MISO
#define LORA_MOSI PIN_LORA_MOSI
#define LORA_CS PIN_LORA_CS
#define LORA_RESET PIN_LORA_RESET
#define LORA_DIO1 PIN_LORA_DIO1
#define LORA_BUSY PIN_LORA_BUSY
#define LORA_DIO2 RADIOLIB_NC

// SX126x driver mappings
#define SX126X_CS LORA_CS
#define SX126X_RESET LORA_RESET
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY

// Custom Power Enable & RF Switch Control definitions
#define LORA_EN PIN_LORA_EN
#define LORA_TR_CTRL PIN_LORA_TR_CTRL
#define SX126X_POWER_EN LORA_EN
#define SX126X_TXEN LORA_TR_CTRL
#define SX126X_RXEN RADIOLIB_NC

// Module Parameters for Ebyte E22-900M30S (SX1262 with 1W PA and 1.8V TCXO)
#define SX126X_MAX_POWER 22
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL
