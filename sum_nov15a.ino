int a,b,sum;

// sudo chmod a+rw /dev/ttyACM0 for error in uploading in ubuntu

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Enter First number: ");
  while(!Serial.available());
  a=Serial.parseInt();
  Serial.println(a);
  Serial.setTimeout(100000); 
  Serial.print("Enter Second number: ");
  while(!Serial.available());
  b=Serial.parseInt();
  Serial.println(b);

  sum=a+b;

  Serial.println("Sum is: ");
  Serial.print(sum);
  Serial.print("---------------------------");
  Serial.println("Do you want to continue ?");
  while(!Serial.available());
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
