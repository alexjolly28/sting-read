String k;
char charBuf[100];
void setup()
{

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop() {



 while(Serial.available()) 
{
k = Serial.readString();// read the incoming data as String
k.toCharArray(charBuf, 100);
Serial.println(charBuf);

}

}
