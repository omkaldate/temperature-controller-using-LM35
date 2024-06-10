
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C screen(0x27 , 16 ,2);
 const int sensor = A0;

 
void setup(){
     Serial.begin(9600);
     screen.init();
     screen.backlight();
     Serial.print("starting........");
     screen.print("starting....");
     delay(300);
     pinMode(sensor,INPUT);



}

void loop() {
  
     int sensin , temp , tempfer;
     sensin = analogRead(sensor);
     Serial.print(" input digital data from sensor = ");
     Serial.println( sensin );
     
       temp =(sensin*4.88)/10;    // formula for deree celsius
       Serial.print("temperature in celsious = ");
       Serial.println( temp );
       
       tempfer = (temp*1.8)+32;  //formula for fehrenhite
       Serial.print("temperature in fehrenhite = ");
       Serial.println( tempfer );
       Serial.println();

}
