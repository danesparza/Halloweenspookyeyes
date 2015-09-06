# Halloween spooky eyes

Arduino sketch for 2 blinking LED 'eyes'

I have tested this with an [Adafruit Pro Trinket](https://www.adafruit.com/products/2010) successfully.  

You can adjust some parameters at the top of the sketch to easily tweak your effects:

```Arduino
//  LED pins
int led = 5; 
int led2 = 6; 

//  Max and min brightness
int maxBrightness = 250;
int minBrightness = 0;

//  Blink fade amount
int fadeOutAmount = 5;    // how many points to fade the LED by
int fadeInAmount = 15;

//  Blink speed range (in milliseconds)
int blinkSpeedMin = 150;
int blinkSpeedMax = 1500;

//  Max and min times to blink each iteration
int maxBlinks = 4;
int minBlinks = 1;

//  Max and min stare time (in seconds):
int maxStare = 9;
int minStare = 3;

//  Max and min sleep time between blinks (in seconds):
int maxSleep = 25;
int minSleep = 7;
```
    
If you want to get really fancy, you can craft your own enclosures -- or just use a toilet paper roll, some duct tape, and some parchment paper to great effect... like this (but don't use 9v batteries -- they kind of suck for this type of thing): 

![Halloween spooky eyes](https://farm4.staticflickr.com/3946/15450734046_631ee7ee97.jpg)

