int a=0;
int b=1;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int A=7;
int B=8;
int C=9;
int D=10;
int E=11;
int F=12;
int G=13;

const int ROWS = 7;
const int COLS = 7;
const int COLS2 = 11;
int M[ROWS][COLS][2]; // storing defined LED Grid
int N[ROWS][COLS];    // storing alphabet coordinates
int Q[ROWS][COLS][COLS2]; // storing sliding matrix


void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  M[0][0][0]=a; M[0][0][1]=A; M[0][1][0]=a; M[0][1][1]=B; M[0][2][0]=a; M[0][2][1]=C; M[0][3][0]=a; M[0][3][1]=D; M[0][4][0]=a; M[0][4][1]=E; M[0][5][0]=a; M[0][5][1]=F; M[0][6][0]=a; M[0][6][1]=G;
  M[1][0][0]=b; M[1][0][1]=A; M[1][1][0]=b; M[1][1][1]=B; M[1][2][0]=b; M[1][2][1]=C; M[1][3][0]=b; M[1][3][1]=D; M[1][4][0]=b; M[1][4][1]=E; M[1][5][0]=b; M[1][5][1]=F; M[1][6][0]=b; M[1][6][1]=G;
  M[2][0][0]=c; M[2][0][1]=A; M[2][1][0]=c; M[2][1][1]=B; M[2][2][0]=c; M[2][2][1]=C; M[2][3][0]=c; M[2][3][1]=D; M[2][4][0]=c; M[2][4][1]=E; M[2][5][0]=c; M[2][5][1]=F; M[2][6][0]=c; M[2][6][1]=G;
  M[3][0][0]=d; M[3][0][1]=A; M[3][1][0]=d; M[3][1][1]=B; M[3][2][0]=d; M[3][2][1]=C; M[3][3][0]=d; M[3][3][1]=D; M[3][4][0]=d; M[3][4][1]=E; M[3][5][0]=d; M[3][5][1]=F; M[3][6][0]=d; M[3][6][1]=G;
  M[4][0][0]=e; M[4][0][1]=A; M[4][1][0]=e; M[4][1][1]=B; M[4][2][0]=e; M[4][2][1]=C; M[4][3][0]=e; M[4][3][1]=D; M[4][4][0]=e; M[4][4][1]=E; M[4][5][0]=e; M[4][5][1]=F; M[4][6][0]=e; M[4][6][1]=G;
  M[5][0][0]=f; M[5][0][1]=A; M[5][1][0]=f; M[5][1][1]=B; M[5][2][0]=f; M[5][2][1]=C; M[5][3][0]=f; M[5][3][1]=D; M[5][4][0]=f; M[5][4][1]=E; M[5][5][0]=f; M[5][5][1]=F; M[5][6][0]=f; M[5][6][1]=G;
  M[6][0][0]=g; M[6][0][1]=A; M[6][1][0]=g; M[6][1][1]=B; M[6][2][0]=g; M[6][2][1]=C; M[6][3][0]=g; M[6][3][1]=D; M[6][4][0]=g; M[6][4][1]=E; M[6][5][0]=g; M[6][5][1]=F; M[6][6][0]=g; M[6][6][1]=G;
}

void loop(){
  clearLED();
  writeA(); slide(); clearLED();
  writeB(); slide(); clearLED();
  writeC(); slide(); clearLED();
  writeD(); slide(); clearLED();
  writeE(); slide(); clearLED();
  writeF(); slide(); clearLED();
  writeG(); slide(); clearLED();
  writeH(); slide(); clearLED();
  writeI(); slide(); clearLED();
  writeJ(); slide(); clearLED();
  writeK(); slide(); clearLED();
  writeL(); slide(); clearLED();
  writeM(); slide(); clearLED();
  writeN(); slide(); clearLED();
  writeO(); slide(); clearLED();
  writeP(); slide(); clearLED();
  writeQ(); slide(); clearLED();
  writeR(); slide(); clearLED();
  writeS(); slide(); clearLED();
  writeT(); slide(); clearLED();
  writeU(); slide(); clearLED();
  writeV(); slide(); clearLED();
  writeW(); slide(); clearLED();
  writeX(); slide(); clearLED();
  writeY(); slide(); clearLED();
  writeZ(); slide(); clearLED();
  delay(1000);
  write0(); slide(); clearLED();
  write1(); slide(); clearLED();
  write2(); slide(); clearLED();
  write3(); slide(); clearLED();
  write4(); slide(); clearLED();
  write5(); slide(); clearLED();
  write6(); slide(); clearLED();
  write7(); slide(); clearLED();
  write8(); slide(); clearLED();
  write9(); slide(); clearLED();
}

void clearLED(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  delay(5);
}

// letters

void writeA(){
  clearN();
                      N[0][2]=1; 
            N[1][1]=1;          N[1][3]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;                              N[3][4]=1;
  N[4][0]=1;N[4][1]=1;N[4][2]=1;N[4][3]=1;N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  N[6][0]=1;                              N[6][4]=1;
}

void writeB(){
  clearN();
  
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;  
            N[1][1]=1;                    N[1][4]=1;  
            N[2][1]=1;                    N[2][4]=1;
            N[3][1]=1;N[3][2]=1;N[3][3]=1; 
            N[4][1]=1;                    N[4][4]=1; 
            N[5][1]=1;                    N[5][4]=1;
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1; 
}

void writeC(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;
  N[3][0]=1;
  N[4][0]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;
}

void writeD(){
  clearN();
  
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;  
            N[1][1]=1;                    N[1][4]=1;  
            N[2][1]=1;                    N[2][4]=1;
            N[3][1]=1;                    N[3][4]=1; 
            N[4][1]=1;                    N[4][4]=1; 
            N[5][1]=1;                    N[5][4]=1;
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1; 
}

void writeE(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1; 
  N[1][0]=1;                              
  N[2][0]=1;
  N[3][0]=1;N[3][1]=1;N[3][2]=1;
  N[4][0]=1;
  N[5][0]=1;							  
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1;N[6][4]=1;
}

void writeF(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1; 
  N[1][0]=1;                              
  N[2][0]=1;
  N[3][0]=1;N[3][1]=1;N[3][2]=1;
  N[4][0]=1;
  N[5][0]=1;							  
  N[6][0]=1;
}

void writeG(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;
  N[3][0]=1;          N[3][2]=1;N[3][3]=1;N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  			N[6][1]=1;N[6][2]=1;N[6][3]=1;
}


void writeH(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;N[3][1]=1;N[3][2]=1;N[3][3]=1;N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  N[6][0]=1;                              N[6][4]=1;
}

void writeI(){
  clearN();
  
            N[0][1]=1;N[0][2]=1;N[0][3]=1;  
                      N[1][2]=1;                      
                      N[2][2]=1;                    
                      N[3][2]=1;					   
                      N[4][2]=1;                     
                      N[5][2]=1;                    
            N[6][1]=1;N[6][2]=1;N[6][3]=1; 
}


void writeJ(){
  clearN();
  
                      N[0][2]=1;N[0][3]=1;N[0][4]=1;  
                                N[1][3]=1;                      
                                N[2][3]=1;                    
                                N[3][3]=1;					   
                                N[4][3]=1;                     
  N[5][0]=1;                    N[5][3]=1;                    
            N[6][1]=1;N[6][2]=1; 
}

void writeK(){
  clearN();
  N[0][0]=1;                              N[0][4]=1; 
  N[1][0]=1;                    N[1][3]=1;          
  N[2][0]=1;          N[2][2]=1;
  N[3][0]=1;N[3][1]=1;
  N[4][0]=1;          N[4][2]=1;
  N[5][0]=1;                    N[5][3]=1;		  
  N[6][0]=1;                              N[6][4]=1;
}

void writeL(){
  clearN();
  N[0][0]=1;
  N[1][0]=1;                              
  N[2][0]=1;
  N[3][0]=1;
  N[4][0]=1;
  N[5][0]=1;							  
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1;N[6][4]=1;
}

void writeM(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;N[1][1]=1;          N[1][3]=1;N[1][4]=1;
  N[2][0]=1;          N[2][2]=1;          N[2][4]=1;
  N[3][0]=1;          N[3][2]=1;          N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  N[6][0]=1;                              N[6][4]=1;
}

void writeN(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;N[2][1]=1;                    N[2][4]=1;
  N[3][0]=1;          N[3][2]=1;          N[3][4]=1;
  N[4][0]=1;                    N[4][3]=1;N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  N[6][0]=1;                              N[6][4]=1;
}

void writeO(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;                              N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;
}

void writeP(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;
  N[1][0]=1;                              N[1][4]=1; 
  N[2][0]=1;                              N[2][4]=1; 
  N[3][0]=1;N[3][1]=1;N[3][2]=1;N[3][3]=1;
  N[4][0]=1;
  N[5][0]=1;							  
  N[6][0]=1;
}

void writeQ(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;                              N[3][4]=1;
  N[4][0]=1;          N[4][2]=1;          N[4][4]=1;
  N[5][0]=1;                    N[5][3]=1;
            N[6][1]=1;N[6][2]=1;          N[6][4]=1;
}

void writeR(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;
  N[1][0]=1;                              N[1][4]=1; 
  N[2][0]=1;                              N[2][4]=1; 
  N[3][0]=1;N[3][1]=1;N[3][2]=1;N[3][3]=1;
  N[4][0]=1;          N[4][2]=1;
  N[5][0]=1;                    N[5][3]=1;
  N[6][0]=1;                              N[6][4]=1;
}

void writeS(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;
            N[3][1]=1;N[3][2]=1;N[3][3]=1;
                                          N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;                              
}

void writeT(){
  clearN();
  
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1;  
                      N[1][2]=1;                      
                      N[2][2]=1;                    
                      N[3][2]=1;					   
                      N[4][2]=1;                     
                      N[5][2]=1;                    
                      N[6][2]=1;
}

void writeU(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;                              N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;
}

void writeV(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;                              N[3][4]=1;
  N[4][0]=1;                              N[4][4]=1;
            N[5][1]=1;          N[5][3]=1;
                      N[6][2]=1;
}

void writeW(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
  N[3][0]=1;          N[3][2]=1;          N[3][4]=1;
  N[4][0]=1;          N[4][2]=1;          N[4][4]=1;
  N[5][0]=1;          N[5][2]=1;          N[5][4]=1;
            N[6][1]=1;          N[6][3]=1;
}

void writeX(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
            N[2][1]=1;          N[2][3]=1;
                      N[3][2]=1;
            N[4][1]=1;          N[4][3]=1;
  N[5][0]=1;                              N[5][4]=1;
  N[6][0]=1;                              N[6][4]=1;
}


void writeY(){
  clearN();
  N[0][0]=1;                              N[0][4]=1;
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
            N[3][1]=1;          N[3][3]=1;
                      N[4][2]=1;
                      N[5][2]=1;
                      N[6][2]=1;
}

void writeZ(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1; 
                                          N[1][4]=1;
                                N[2][3]=1;
                      N[3][2]=1;
            N[4][1]=1;
  N[5][0]=1;							  
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1;N[6][4]=1;
}
// Numerals

void write0(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                    N[2][3]=1;N[2][4]=1;
  N[3][0]=1;          N[3][2]=1;          N[3][4]=1;
  N[4][0]=1;N[4][1]=1;                    N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;
}

void write1(){
  clearN();
  
                      N[0][2]=1; 
            N[1][1]=1;N[1][2]=1;                      
                      N[2][2]=1;                    
                      N[3][2]=1;					   
                      N[4][2]=1;                     
                      N[5][2]=1;                    
            N[6][1]=1;N[6][2]=1;N[6][3]=1;   
}


void write2(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
                                          N[2][4]=1;
                      N[3][2]=1;N[3][3]=1;
            N[4][1]=1;
  N[5][0]=1;							  
  N[6][0]=1;N[6][1]=1;N[6][2]=1;N[6][3]=1;N[6][4]=1;
}


void write3(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
                                          N[2][4]=1;
                      N[3][2]=1;N[3][3]=1;
                                          N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;                              
}


void write4(){
  clearN();
  
                                N[0][3]=1;  
                      N[1][2]=1;N[1][3]=1;                      
            N[2][1]=1;          N[2][3]=1;                    
  N[3][0]=1;                    N[3][3]=1;					   
  N[4][0]=1;N[4][1]=1;N[4][2]=1;N[4][3]=1;N[4][4]=1;                     
                                N[5][3]=1;                    
                                N[6][3]=1; 
}

void write5(){
  clearN();
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1; 
  N[1][0]=1;                              
  N[2][0]=1;N[2][1]=1;N[2][2]=1;N[2][3]=1;
                                          N[3][4]=1;
                                          N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;                              
}

void write6(){
  clearN();
                      N[0][2]=1;N[0][3]=1; 
            N[1][1]=1;
  N[2][0]=1;
  N[3][0]=1;N[3][1]=1;N[3][2]=1;N[3][3]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
            N[6][1]=1;N[6][2]=1;N[6][3]=1;
}

void write7(){
  clearN();
  
  N[0][0]=1;N[0][1]=1;N[0][2]=1;N[0][3]=1;N[0][4]=1;  
                                          N[1][4]=1;                      
                                N[2][3]=1;                    
                      N[3][2]=1;					   
            N[4][1]=1;                     
            N[5][1]=1;                    
            N[6][1]=1;
}

void write8(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
            N[3][1]=1;N[3][2]=1;N[3][3]=1;
  N[4][0]=1;                              N[4][4]=1;
  N[5][0]=1;                              N[5][4]=1;
  			N[6][1]=1;N[6][2]=1;N[6][3]=1;
}


void write9(){
  clearN();
            N[0][1]=1;N[0][2]=1;N[0][3]=1; 
  N[1][0]=1;                              N[1][4]=1;
  N[2][0]=1;                              N[2][4]=1;
            N[3][1]=1;N[3][2]=1;N[3][3]=1;N[3][4]=1;
                                          N[4][4]=1;
                                N[5][3]=1;
            N[6][1]=1;N[6][2]=1;
}



void slide(){
  // First snapshot of letter
  // Q[0][0][0]=N[0][4]; Q[1][0][0]=N[1][4]; Q[2][0][0]=N[2][4]; Q[3][0][0]=N[3][4]; Q[4][0][0]=N[4][4]; Q[5][0][0]=N[5][4]; Q[6][0][0]=N[6][4];
  // Second snapshot of letter
  //Q[0][0][1]=N[0][3]; Q[1][0][1]=N[1][3]; Q[2][0][1]=N[2][3]; Q[3][0][1]=N[3][3]; Q[4][0][1]=N[4][3]; Q[5][0][1]=N[5][3]; Q[6][0][1]=N[6][3];
  // Q[0][1][1]=N[0][4]; Q[1][1][1]=N[1][4]; Q[2][1][1]=N[2][4]; Q[3][1][1]=N[3][4]; Q[4][1][1]=N[4][4]; Q[5][1][1]=N[5][4]; Q[6][1][1]=N[6][4];
  // Third snapshot of letter
  // Q[0][0][2]=N[0][2]; Q[1][0][2]=N[1][2]; Q[2][0][2]=N[2][2]; Q[3][0][2]=N[3][2]; Q[4][0][2]=N[4][2]; Q[5][0][2]=N[5][2]; Q[6][0][2]=N[6][2];
  // Q[0][1][2]=N[0][3]; Q[1][1][2]=N[1][3]; Q[2][1][2]=N[2][3]; Q[3][1][2]=N[3][3]; Q[4][1][2]=N[4][3]; Q[5][1][2]=N[5][3]; Q[6][1][2]=N[6][3];
  // Q[0][2][2]=N[0][4]; Q[1][2][2]=N[1][4]; Q[2][2][2]=N[2][4]; Q[3][2][2]=N[3][4]; Q[4][2][2]=N[4][4]; Q[5][2][2]=N[5][4]; Q[6][2][2]=N[6][4];
  // Fourth snapshot of letter
  // Q[0][0][3]=N[0][1]; Q[1][0][3]=N[1][1]; Q[2][0][3]=N[2][1]; Q[3][0][3]=N[3][1]; Q[4][0][3]=N[4][1]; Q[5][0][3]=N[5][1]; Q[6][0][3]=N[6][1];
  // Q[0][1][3]=N[0][2]; Q[1][1][3]=N[1][2]; Q[2][1][3]=N[2][2]; Q[3][1][3]=N[3][2]; Q[4][1][3]=N[4][2]; Q[5][1][3]=N[5][2]; Q[6][1][3]=N[6][2];
  // Q[0][2][3]=N[0][3]; Q[1][2][3]=N[1][3]; Q[2][2][3]=N[2][3]; Q[3][2][3]=N[3][3]; Q[4][2][3]=N[4][3]; Q[5][2][3]=N[5][3]; Q[6][2][3]=N[6][3];
  // Q[0][3][3]=N[0][4]; Q[1][3][3]=N[1][4]; Q[2][3][3]=N[2][4]; Q[3][3][3]=N[3][4]; Q[4][3][3]=N[4][4]; Q[5][3][3]=N[5][4]; Q[6][3][3]=N[6][4];
  // Fifth snapshot of letter
  Q[0][0][4]=N[0][0]; Q[1][0][4]=N[1][0]; Q[2][0][4]=N[2][0]; Q[3][0][4]=N[3][0]; Q[4][0][4]=N[4][0]; Q[5][0][4]=N[5][0]; Q[6][0][4]=N[6][0];
  Q[0][1][4]=N[0][1]; Q[1][1][4]=N[1][1]; Q[2][1][4]=N[2][1]; Q[3][1][4]=N[3][1]; Q[4][1][4]=N[4][1]; Q[5][1][4]=N[5][1]; Q[6][1][4]=N[6][1];
  Q[0][2][4]=N[0][2]; Q[1][2][4]=N[1][2]; Q[2][2][4]=N[2][2]; Q[3][2][4]=N[3][2]; Q[4][2][4]=N[4][2]; Q[5][2][4]=N[5][2]; Q[6][2][4]=N[6][2];
  Q[0][3][4]=N[0][3]; Q[1][3][4]=N[1][3]; Q[2][3][4]=N[2][3]; Q[3][3][4]=N[3][3]; Q[4][3][4]=N[4][3]; Q[5][3][4]=N[5][3]; Q[6][3][4]=N[6][3];
  Q[0][4][4]=N[0][4]; Q[1][4][4]=N[1][4]; Q[2][4][4]=N[2][4]; Q[3][4][4]=N[3][4]; Q[4][4][4]=N[4][4]; Q[5][4][4]=N[5][4]; Q[6][4][4]=N[6][4];
  // Sixth snapshot of letter
  Q[0][1][5]=N[0][0]; Q[1][1][5]=N[1][0]; Q[2][1][5]=N[2][0]; Q[3][1][5]=N[3][0]; Q[4][1][5]=N[4][0]; Q[5][1][5]=N[5][0]; Q[6][1][5]=N[6][0];
  Q[0][2][5]=N[0][1]; Q[1][2][5]=N[1][1]; Q[2][2][5]=N[2][1]; Q[3][2][5]=N[3][1]; Q[4][2][5]=N[4][1]; Q[5][2][5]=N[5][1]; Q[6][2][5]=N[6][1];
  Q[0][3][5]=N[0][2]; Q[1][3][5]=N[1][2]; Q[2][3][5]=N[2][2]; Q[3][3][5]=N[3][2]; Q[4][3][5]=N[4][2]; Q[5][3][5]=N[5][2]; Q[6][3][5]=N[6][2];
  Q[0][4][5]=N[0][3]; Q[1][4][5]=N[1][3]; Q[2][4][5]=N[2][3]; Q[3][4][5]=N[3][3]; Q[4][4][5]=N[4][3]; Q[5][4][5]=N[5][3]; Q[6][4][5]=N[6][3];
  Q[0][5][5]=N[0][4]; Q[1][5][5]=N[1][4]; Q[2][5][5]=N[2][4]; Q[3][5][5]=N[3][4]; Q[4][5][5]=N[4][4]; Q[5][5][5]=N[5][4]; Q[6][5][5]=N[6][4];
  // Seventh snapshot of letter
  Q[0][2][6]=N[0][0]; Q[1][2][6]=N[1][0]; Q[2][2][6]=N[2][0]; Q[3][2][6]=N[3][0]; Q[4][2][6]=N[4][0]; Q[5][2][6]=N[5][0]; Q[6][2][6]=N[6][0];
  Q[0][3][6]=N[0][1]; Q[1][3][6]=N[1][1]; Q[2][3][6]=N[2][1]; Q[3][3][6]=N[3][1]; Q[4][3][6]=N[4][1]; Q[5][3][6]=N[5][1]; Q[6][3][6]=N[6][1];
  Q[0][4][6]=N[0][2]; Q[1][4][6]=N[1][2]; Q[2][4][6]=N[2][2]; Q[3][4][6]=N[3][2]; Q[4][4][6]=N[4][2]; Q[5][4][6]=N[5][2]; Q[6][4][6]=N[6][2];
  Q[0][5][6]=N[0][3]; Q[1][5][6]=N[1][3]; Q[2][5][6]=N[2][3]; Q[3][5][6]=N[3][3]; Q[4][5][6]=N[4][3]; Q[5][5][6]=N[5][3]; Q[6][5][6]=N[6][3];
  Q[0][6][6]=N[0][4]; Q[1][6][6]=N[1][4]; Q[2][6][6]=N[2][4]; Q[3][6][6]=N[3][4]; Q[4][6][6]=N[4][4]; Q[5][6][6]=N[5][4]; Q[6][6][6]=N[6][4];
  // Eighth snapshot of letter
  Q[0][3][7]=N[0][0]; Q[1][3][7]=N[1][0]; Q[2][3][7]=N[2][0]; Q[3][3][7]=N[3][0]; Q[4][3][7]=N[4][0]; Q[5][3][7]=N[5][0]; Q[6][3][7]=N[6][0];
  Q[0][4][7]=N[0][1]; Q[1][4][7]=N[1][1]; Q[2][4][7]=N[2][1]; Q[3][4][7]=N[3][1]; Q[4][4][7]=N[4][1]; Q[5][4][7]=N[5][1]; Q[6][4][7]=N[6][1];
  Q[0][5][7]=N[0][2]; Q[1][5][7]=N[1][2]; Q[2][5][7]=N[2][2]; Q[3][5][7]=N[3][2]; Q[4][5][7]=N[4][2]; Q[5][5][7]=N[5][2]; Q[6][5][7]=N[6][2];
  Q[0][6][7]=N[0][3]; Q[1][6][7]=N[1][3]; Q[2][6][7]=N[2][3]; Q[3][6][7]=N[3][3]; Q[4][6][7]=N[4][3]; Q[5][6][7]=N[5][3]; Q[6][6][7]=N[6][3];
  // Ninth snapshot of letter
  Q[0][4][8]=N[0][0]; Q[1][4][8]=N[1][0]; Q[2][4][8]=N[2][0]; Q[3][4][8]=N[3][0]; Q[4][4][8]=N[4][0]; Q[5][4][8]=N[5][0]; Q[6][4][8]=N[6][0];
  Q[0][5][8]=N[0][1]; Q[1][5][8]=N[1][1]; Q[2][5][8]=N[2][1]; Q[3][5][8]=N[3][1]; Q[4][5][8]=N[4][1]; Q[5][5][8]=N[5][1]; Q[6][5][8]=N[6][1];
  Q[0][6][8]=N[0][2]; Q[1][6][8]=N[1][2]; Q[2][6][8]=N[2][2]; Q[3][6][8]=N[3][2]; Q[4][6][8]=N[4][2]; Q[5][6][8]=N[5][2]; Q[6][6][8]=N[6][2];
  // Tenth snapshot of letter
  Q[0][5][9]=N[0][0]; Q[1][5][9]=N[1][0]; Q[2][5][9]=N[2][0]; Q[3][5][9]=N[3][0]; Q[4][5][9]=N[4][0]; Q[5][5][9]=N[5][0]; Q[6][5][9]=N[6][0];
  Q[0][6][9]=N[0][1]; Q[1][6][9]=N[1][1]; Q[2][6][9]=N[2][1]; Q[3][6][9]=N[3][1]; Q[4][6][9]=N[4][1]; Q[5][6][9]=N[5][1]; Q[6][6][9]=N[6][1];
  // Eleventh snapshot of letter
  Q[0][6][10]=N[0][0]; Q[1][6][10]=N[1][0]; Q[2][6][10]=N[2][0]; Q[3][6][10]=N[3][0]; Q[4][6][10]=N[4][0]; Q[5][6][10]=N[5][0]; Q[6][6][10]=N[6][0];
  
  // printing sliding elements
  for (int k=0; k<COLS2;k++){
    for (int pp = 0; pp < 20; pp++) {
      for (int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
          if(Q[i][j][k]==1){
            LED(M[i][j][0],M[i][j][1]);
          }
        }
      }
    } 
  }
}




void clearN(){
    for (int i=0;i<ROWS;i++){
      for(int j=0;j<COLS;j++){
        N[i][j]=0;
        for (int k=0;k<COLS2;k++){
          Q[i][j][k]=0;
        }
      }
    }
}

void LED(int x, int y){
  digitalWrite(x,HIGH);
  digitalWrite(y,LOW);
  delay(3);
  digitalWrite(x,LOW);
  digitalWrite(y,HIGH); 
}
