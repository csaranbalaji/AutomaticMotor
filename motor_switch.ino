//code for LED control using sensor

int sensorA=3,sensorB=4,button=2;
int LED=13;
int sA,sB,B;
void setup()
{
	pinMode(sensorA,INPUT);
	pinMode(sensorB,INPUT);
	pinMode(button,INPUT);

}

void loop()
{
	
	B=digitalRead(button);
        digitalWrite(LED,LOW);
	while(B==HIGH)
	{       sA=digitalRead(sensorA);
	        sB=digitalRead(sensorA);
		if(sA==HIGH)
		{
			digitalWrite(LED,LOW);

		}
		if(sB==LOW)
		{
			digitalWrite(LED,HIGH);
		}

	}

}
