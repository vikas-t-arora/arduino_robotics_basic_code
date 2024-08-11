int m;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Please enter your marks: ");
while(!Serial.available());
m=Serial.parseInt();
Serial.println("You have entered the marks: ");
Serial.println(m);
if(m>=90){
  Serial.println("Grade A");
}
if(m>=70 && m<90){
  Serial.println("Grade B");
}
if(m>=50 && m<70){
  Serial.println("Grade C");
}
if(m<50){
  Serial.println("Grade D");
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
