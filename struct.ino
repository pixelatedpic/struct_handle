


struct ty
{
   int x;
   int y; 
  
} locationz;




void setup()
{
   Serial.begin(9600); 
   //locationz mYlocal;
   locationz.x = 1;
   locationz.y = 3;
   printthis();
   //Serial.println(mYlocal);
}

void printthis()
{
  //mYlocal.x;
  Serial.println(locationz.x);
  Serial.println(locationz.y);
  
}
void loop()
{
  //printthis();
  //Serial.println(mYlocal.x);
  //delay(5000);
  //locationz.x;
  
}
