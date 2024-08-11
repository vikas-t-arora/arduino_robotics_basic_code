int a;
int b;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
a=7896; // this is the pin of the ATM
Serial.println("Enter your pin: ");
while(!Serial.available());
b=Serial.parseInt();
Serial.println("You entered the pin: ");
Serial.println(b);
if(b==a){
  Serial.println("Your pin is CORRECT");
}
else{
  Serial.println("Your pin is WRONG");
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
