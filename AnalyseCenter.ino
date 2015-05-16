
#include <TimerOne.h>
float temperature;
int emotion =0;
int hbStr=0;
const int TEMP_MIN = 32;
const int TEMP_MID = 35;
const int TEMP_MAX = 38;

const int AMP_MIN = 0;
const int AMP_MID = 0;
const int AMP_MAX = 0;

const int BPM_MIN = 0;
const int BPM_MID = 0;
const int BPM_MAX = 0;

int result = 0;

void startAnalyse(){
  Timer1.initialize(2000);
  Timer1.attachInterrupt( Analyse ); 
}

void Analyse(){
HeartBeatAlg();
temperature = measureObjectTemp();
//Temperature
//analyse

// Normal
if ((temperature >= TEMP_MIN) && (temperature < TEMP_MID) && (BPM >= BPM_MIN) && (BPM < BPM_MID) && (amp >= AMP_MIN) && (amp < AMP_MID))
{
  result = 1;
}
else if ((temperature >= TEMP_MIN) && (temperature < TEMP_MID) && (BPM >= BPM_MIN) && (BPM < BPM_MID) && (amp >= AMP_MID) && (amp < AMP_MAX))
{

}
else if ((temperature >= TEMP_MIN) && (temperature < TEMP_MID) && (BPM >= BPM_MIN) && (BPM < BPM_MID) && (amp >= AMP_MAX))
{

}
else
  result = NOUN;

// result
switch (result) {
  case 0:
    emotion = LOWEMO;
    break;
  case 1:
    emotion = NORMAL;
    break;
  case 2:
    emotion = HIGHEMO;
    break;
  default:
    emotion = NOUN;
}

//send
int herb1=hbStr*1000+BPM;
sendDataToRemoate("heartb1", herb1);
sendDataToRemoate("emot1", emotion) ;
}


