//Conect the Digital pin of LDR on the 12 and LED positive on 13 as Shown Below
int LDR = 12;
int LED = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(LDR,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //We Have taken Digital pin because we wanna get output in binary that is 1,0 
  //1= HIGH
  //0 = LOW
int Value = digitalRead(LDR);
Serial.println(Value);

if(Value == 1){
  digitalWrite(LED,HIGH);

}
else{
  digitalWrite(LED,LOW);
}
}
