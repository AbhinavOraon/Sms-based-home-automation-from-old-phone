/********************************0MeGa EleCtR0nIcs***********
//@Author= Abhinav Etwa Oraon
04-04-2022
*/
int count=0;
int data;
int phone=2;//+ve wire connected as input in digital pin 2 and commen the ground.
int relay=3;//relay is connected to digital pin 3
void setup() {
Serial.begin(9600);
pinMode(phone,INPUT);//phone vibrator as input data
pinMode(relay,OUTPUT);//relay as output
}

void loop() {
 data=digitalRead(phone);//read the digital Signals from the phone
 if (data==1){
  //if data is 1 then assign count to count +1
  count=count+1;
 Serial.println(count);}
 //-------------------------------------------------------
 switch(count){
  case 1://if data in count is 1
    digitalWrite(relay,1);
  break;
//--------------------------------------------------------
  case 2://if data in count is 2
    digitalWrite(relay,0);
  case 3://if data in count is 3
    digitalWrite(relay,0);
    count=0;
    break;
//--------------------------------------------------------
  default://if no case satisfied
  digitalWrite(relay,0);
  count=0;}
  delay(1000); 
  }
