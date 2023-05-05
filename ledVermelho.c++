// C++ code
//
int led = 8;
int btn = 2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{
  int pascalzim = digitalRead(btn); 
  if (pascalzim ==  HIGH){
  digitalWrite(led, LOW);
}
  else{
    digitalWrite(led, HIGH);
  }
}