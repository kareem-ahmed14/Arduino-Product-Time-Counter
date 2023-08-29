const int button=7;
long int t1=0;
long int t2=0;
long int T=0;
float TS=0;
bool counter= false;
int reading;
void setup()
{
  Serial.begin(9600);
  pinMode(button,INPUT);
}
void loop()
{
  reading=digitalRead(button);
if(reading==1&&!counter){
  t1=millis();
  counter=true;
  }
    else if(reading==0&&counter){
      t2=millis();
      counter=false;
      T=t2-t1;
      TS=T/1000.0;
    Serial.print("Time");
    Serial.print(" = ");
    Serial.print(TS);
    Serial.println(" s");     
    }
}