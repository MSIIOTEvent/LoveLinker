
#include <TimerOne.h>

void startAnalyse(){
  Timer1.initialize(2000);
  Timer1.attachInterrupt( Analyse ); 
}

void Analyse(){
HeartBeatAlg();
//Temperature
//analyse
//send
}
