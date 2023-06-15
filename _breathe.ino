int led = 13;           // the pin that the LED is attached to

double brightness = 0;    // how bright the LED is -  0 to 255
  
// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin to be an output:
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
 
    

  double freq = live(0.5,2,(double)1/10); // WTF
  brightness = live(2,225,freq);
  
  analogWrite(led, brightness);  

  
//  delay(30);
}

double live(double sml, double big, double Hz) {
  double n = (double)micros()/1000000;
  //liveT -= floor(liveT);
  liveT = liveT*PI*2*Hz;
  double out = (sin(liveT)*((big-sml)/2))+((big-sml)/2)+sml;
  return out;  
}

