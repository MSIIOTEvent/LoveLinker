int revieveEmotion = 0;
int str = 0;
int hbFreq = 0;

void TaskDispatcher() {
  revieveEmotion = retriveRemoteData("emot1");
  int hb =  retriveRemoteData("heartb1");
  str = hb / 1000;
  hbFreq = hb % 1000;
  
  //control Vibrate
  
  //control Led
}
