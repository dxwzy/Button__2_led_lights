int blue = 8;
int red = 10;
int button = 7;
int value;

void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
pinMode(red, OUTPUT);
pinMode (blue, OUTPUT);
}

void loop() {
 value = digitalRead(button);
 if(value==1){
  digitalWrite(red,1);
  digitalWrite(blue,0);
  }else{
    digitalWrite(blue,1);
    digitalWrite(red,0);
    }
}
