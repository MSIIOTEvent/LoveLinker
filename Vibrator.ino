int MoPin = 7;    // vibrator Grove connected to digital pin 7

int VibrationUpTime = 0;
int VibrationDownTime = 0;
boolean isVibration = false;
boolean isVibrationUp = false;

void setupVibrator() {
  pinMode( MoPin, OUTPUT );
}

void setVibration(int upTime, int downTime, boolean state) {
  VibrationUpTime = upTime ;
  VibrationDownTime = downTime ;
  isVibration = state;
}

void updateVibration() {
  if (!isVibration) {
    digitalWrite(MoPin, LOW);
    return;
  }
  if (isVibrationUp == false) {
    isVibrationUp = true;
    digitalWrite(MoPin, HIGH);
  } else {
    isVibrationUp = false;
    digitalWrite(MoPin, LOW);
  }

}
