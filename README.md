# embedded-crypto-tracker

![](docs/sample.gif)

Uses and esp32 and an Adafruit SSD1306 OLED Screen to track and display crypto (doge) prices.

## How It Works
The program uses the in-built wifi module in the ESP32 to send a GET request to a custom API. A sample python program is provided in the `sample_api` directory to learn how the API should be structured. Once the the request is made the price on screen is updated the animation is changed depending on whether the price has increased or decreased.


## Screen Animation
An animation is displayed alongside the current price in USD.


Price Increase               | Price Decrease
:-------------------------:|:-------------------------:
![](sprites/TO_THE_MOON/fly_animation.gif)  |  ![](sprites/CRASHING_ON_EARTH/crash_animation.gif)