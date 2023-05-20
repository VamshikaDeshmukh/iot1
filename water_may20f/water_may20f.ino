void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int s=analogRead(A0);
 Serial.println(s);  
    if(s>600)
    {
      Serial.println("wet");
    }
    else
    {
      Serial.println("dry");
    }
}
