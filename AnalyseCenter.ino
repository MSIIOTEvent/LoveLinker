
#include <TimerOne.h>
float temprature;

void startAnalyse(){
  Timer1.initialize(2000);
  Timer1.attachInterrupt( Analyse ); 
}

void Analyse(){
HeartBeatAlg();
temprature = measureObjectTemp();
//Temperature
//analyse
//send
}
