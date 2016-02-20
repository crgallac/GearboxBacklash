#include <SPI.h>
#include <AS5048A.h>
#include<stdlib.h>
#include <math.h>
#include <Encoder.h>
#include <DueTimer.h>


bool STATE=HIGH; 
AS5048A angleSensor(10);

Encoder myEnc0(28, 29); //pins for 

float ts0;
float ts;


void setup()
{
  SerialUSB.begin(9600);
  angleSensor.init();
while (!SerialUSB) ;
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);  
// Timer1.attachInterrupt(writeSerial).start(5000);
  myEnc0.write(angleSensor.getRotation()* 13856.0 / 6.28);
}

void loop()
{
  delay(500);
  STATE=!STATE; 
digitalWrite(13, !STATE);  
//  SerialUSB.println(); 
  double val = angleSensor.getRotation();
////  SerialUSB.println("Got rotation of: 0x");
// float angle=(float)val; 
 ts= 180*val/3.14;
 ts0 = 360.0/13856.0*myEnc0.read();


  SerialUSB.println("After Gearbox");
    SerialUSB.println(ts);
  SerialUSB.println("Before Gearbox");
    SerialUSB.println(ts0); 
}

void writeSerial() {

}


