void startPairPAN(){
system("./~/startNetworkPairing.sh");
}

void startPairBracelet(){
system("./~/pairBracelet.py");
}

void waitForPairBracelet(){
  system("./~/pairBraceletCli.sh");
}
