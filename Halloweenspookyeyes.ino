/*
 Halloweenspookyeyes
 Blinks LED's a random number of times, then waits for a random number of seconds.  
 Imitates animals in the bushes
 
 Copyright (c) 2014 Dan Esparza
 
 To upload to your Gemma or Trinket:
 1) Select the proper board from the Tools->Board Menu
 2) Select USBtinyISP from the Tools->Programmer
 3) Plug in the Gemma/Trinket, make sure you see the green LED lit
 4) For windows, install the USBtiny drivers
 5) Press the button on the Gemma/Trinket - verify you see
 the red LED pulse. This means it is ready to receive data
 6) Click the upload button above within 10 seconds
 */

//  LED pins
int led = 5; 
int led2 = 6; 

//  Blink fade amount
int fadeOutAmount = 5;    // how many points to fade the LED by
int fadeInAmount = 15;

//  Max and min times to blink each iteration
int maxBlinks = 3;
int minBlinks = 1;

//  Max and min stare time (in seconds):
int maxStare = 6;
int minStare = 3;

//  Max and min sleep time between blinks (in seconds):
int maxSleep = 15;
int minSleep = 5;

// the setup routine runs once when you press reset:
void setup() {
  
  //  Setup LED's
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  //  Determine number of times to blink:
  int numBlinks = random(minBlinks, maxBlinks);
  
  for(int count = 0; count <= numBlinks; count++)
  {
      //  Fade them in
      fadeIn();  
     
      // Pause to see the eyes on    
      delay(1000);
      
      if(count != numBlinks)
      {
        fadeOut();
      } 
      
      delay(200);
  }
  
  //  Determine the amount of time to stare:
  int stareTime = random(minStare, maxStare) * 1000;
  
  // Pause to stare    
  delay(stareTime);

  // Fade the eyes out
  fadeOut();
  
  //  Determine the amount of time to sleep:
  int sleepTime = random(minSleep, maxSleep) * 1000;
  
  //  'Sleep' with the eyes out
  delay(sleepTime);
}

void fadeIn()
{
  //  Loop to fade the leds in:
  for (int brightness = 0; brightness <= 255; brightness = brightness + fadeInAmount) 
  { 
      //  Fade both leds at the same time
      analogWrite(led, brightness); analogWrite(led2, brightness);
      
      // wait for 10 milliseconds to see the dimming effect    
      delay(10); 
  }
}

void fadeOut()
{
  //  Loop to fade the leds out:
  for (int brightness = 255; brightness >= 0; brightness = brightness - fadeOutAmount) 
  { 
      //  Fade both leds at the same time
      analogWrite(led, brightness); analogWrite(led2, brightness);
      
      // wait for 10 milliseconds to see the dimming effect    
      delay(5); 
  }
}

void eyesOff()
{
  //  Cut both leds at the same time
  analogWrite(led, 0); analogWrite(led2, 0);
  
  // wait for 10 milliseconds to see the dimming effect    
  delay(5);
}

