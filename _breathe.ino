int led = 13;
double brightness = 0;
  
void setup()
{
  pinMode(led, OUTPUT);
} 

void loop()
{
  double freq = live(0.5,2,(double)1/10);
  brightness = live(2,225,freq);
  analogWrite(led, brightness);  
//  delay(30);
}

double live(double sml, double big, double Hz)
{
  double n = (double)micros()/1000000;
  liveT = liveT*PI*2*Hz;
  double out = (sin(liveT)*((big-sml)/2))+((big-sml)/2)+sml;
  return out;  
}
