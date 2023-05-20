void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(D2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int m=digitalRead(D2);
Serial.println(m);
if(m==0)
{
  Serial.println("obj dected");
}
else
{
  Serial.println("obj notdected");
}
}
