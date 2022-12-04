//Motores A
int ena = 10;
int in1 = 9;
int in2 = 8;

//Motores B
int enb = 5;
int in3 = 7;
int in4 = 6;

//Robot



void setup() {
  // put your setup code here, to run once:
  //Motores A
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);


  //Motores A
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  moverAdelante(80, 1500);
  moverAtras(80, 1500);
  acelerarAdelante(10);
  detener(5000);
  rotarDerecha(5000);
  rotarIzquierda(5000);
  
  


  //exit(0);
}


void moverAdelante(int velocidad, int tiempo){
  //Velocidad puede ser de 0 a 255
  //El tiempo es en milisegundos
  
  //Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  //Motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
  analogWrite(ena, velocidad);
  analogWrite(enb, velocidad);

  delay(tiempo);
  
  analogWrite(ena, 0);
  analogWrite(enb, 0);

}


void moverAtras(int velocidad, int tiempo){
  //Velocidad puede ser de 0 a 255
  //El tiempo es en milisegundos
  
  //Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  //Motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  analogWrite(ena, velocidad);
  analogWrite(enb, velocidad);

  delay(tiempo);
  
  analogWrite(ena, 0);
  analogWrite(enb, 0);

}


void rotarDerecha(int tiempo){
  //Velocidad puede ser de 0 a 255
  //El tiempo es en milisegundos
    
  //Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  //Motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  analogWrite(ena, 100);
  analogWrite(enb, 100);

  delay(tiempo);
  
  analogWrite(ena, 0);
  analogWrite(enb, 0);

}

void rotarIzquierda(int tiempo){
  //Velocidad puede ser de 0 a 255
  //El tiempo es en milisegundos
    
  //Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  //Motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
  analogWrite(ena, 100);
  analogWrite(enb, 100);

  delay(tiempo);
  
  analogWrite(ena, 0);
  analogWrite(enb, 0);
}

void acelerarAdelante(int tiempo){
  //El tiempo es en milisegundos
  
  //Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  //Motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  for(int i = 1; i<255; i++){
    analogWrite(ena, i);
    analogWrite(enb, i);
    delay(tiempo);
  }
  
}

void detener(int tiempo){
  //Velocidad puede ser de 0 a 255
  //El tiempo es en milisegundos
  
  //Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  //Motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(ena, 0);
  analogWrite(enb, 0);

  delay(tiempo);
}