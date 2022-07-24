#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>
#include "rocket.h"

// SSD1306 Configs
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDR 0x3C
#define OLED_RESET -1

#define uS_TO_S_FACTOR 1000000 /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP 60       /* Time ESP32 will go to sleep (in seconds) */

// Create String Variables for your favourite Stock
String Date_Time;
String doge_price;

WiFiMulti WiFiMulti;
RTC_DATA_ATTR int bootCount = 0;
Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int frame = 0;


void get_price();
void splash();

void setup()
{
  Serial.begin(9600);
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // initialize with the I2C addr 0x3C (for the 128x32)
  // init done
  display.clearDisplay();

  // text display tests
  display.setCursor(0, 16);
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.println("DOGE");
  display.display();

  WiFi.mode(WIFI_STA);
  WiFiMulti.addAP("Mahmood", "jerusalem");

  ++bootCount;
  Serial.println("Boot number: " + String(bootCount));

  splash();
  get_price();
  /*
    First we configure the wake up source
    We set our ESP32 to wake up every 5 seconds
  */
  //esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
  Serial.println("Setup ESP32 to sleep for every " + String(TIME_TO_SLEEP) +
                 " Seconds");
}

unsigned long prev = 0;
const long interval = 120000;

float prevPrice = 0;
bool up = true;

void loop()
{
  unsigned long curr = millis();

  if ((curr - prev >= interval))
  {
    get_price();
    prev = millis();
  }

  display.fillRect(64, 15, 48, 48, BLACK);

  if (up)
  {
    if (frame > 7)
    {
      frame = 0;
    }
    display.drawBitmap(64, 15, rocket_imgs[frame], 48, 48, WHITE);
  }
  else
  {
    if (frame > 5)
    {
      frame = 0;
    }
    display.drawBitmap(64, 15, rocket_fall[frame], 48, 48, WHITE);
  }

  display.display();
  frame++;

  delay(500);
}

void get_price()
{
  if (WiFiMulti.run() == WL_CONNECTED)
  {
    HTTPClient http;

    Serial.print("[HTTP] begin...\n");
    // configure traged server and url
    http.begin("https://doge-esp-api.herokuapp.com/"); //HTTP

    Serial.print("[HTTP] GET...\n");
    // start connection and send HTTP header
    int httpCode = http.GET();

    // httpCode will be negative on error
    if (httpCode > 0)
    {
      // HTTP header has been send and Server response header has been handled
      Serial.printf("[HTTP] GET... code: %d\n", httpCode);

      // file found at server
      if (httpCode == HTTP_CODE_OK)
      {
        doge_price = http.getString();
        Serial.println(doge_price);

        display.clearDisplay();
        display.setCursor(0, 0);
        display.setTextSize(1);
        display.println("DOGE");
        display.print(doge_price);
        display.display();

        up = (doge_price.toFloat() >= prevPrice);
        prevPrice = doge_price.toFloat();
      }
    }
    else
    {
      Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }

    http.end();
  }
}

void splash()
{
  for (int j = 0; j < 5; j++)
  {
    for (int i = 0; i < 7; i++)
    {
      display.fillRect(64, 15, 48, 48, BLACK);
      display.drawBitmap(64, 15, rocket_imgs[i], 48, 48, WHITE);
      display.display();
      delay(500);
    }
  }
}
