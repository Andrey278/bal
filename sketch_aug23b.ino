/*Таймер-автомат Thanks: Ghost D. for  Smart Relay module (beta) 04/2/2014  Compiled on Aurdino IDE (2 Attiny2313), Arduino forum */  byte rele_pin=13; unsigned long currentTime; unsigned long loopTime; void setup() { pinMode(rele_pin,OUTPUT); loopTime=currentTime; } void loop() { currentTime=millis(); if (currentTime>=(loopTime + 86400000)) { digitalWrite(rele_pin,HIGH); delay(30000); digitalWrite(rele_pin,LOW); loopTime=currentTime; } static byte prevButtonState=false; unsigned long buttonrele(13); byte buttonState=!digitalRead(buttonrele); unsigned long buttonPressTime=0;  if(!prevButtonState && buttonState && (millis()-buttonPressTime>100)) { buttonPressTime=millis(); } prevButtonState=buttonState; currentTime=millis(); unsigned long currentTime_temp; if(currentTime_temp>=(currentTime+4294967295)); { currentTime_temp=0;currentTime_temp=currentTime; } }
  
 


