void setup(){

  //Semáforo 1
  pinMode(9, OUTPUT); // LED verde de pedestres
  pinMode(10, OUTPUT); // LED vermelho de pedestres
  pinMode(11, OUTPUT); // LED verde de carros
  pinMode(12, OUTPUT); // LED amarelo de carros
  pinMode(13, OUTPUT); // LED vermelho de carros

  //Semáforo 2
  pinMode(7, OUTPUT); // LED vermelho de carros
  pinMode(6, OUTPUT); // LED amarelo de carros
  pinMode(5, OUTPUT); // LED verde de carros
  pinMode(4, OUTPUT); // LED vermelho de pedestres
  pinMode(3, OUTPUT); // LED verde de pedestres
  
}

void loop(){

  //Sinal de pedestres 1 fechado
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  //Sinal de pedestres 2 aberto
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);

 //Sinal verde para carros ligado por 15 segundos Semaforo 1
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  
  //Semaforo 2 fechado

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(13000);

  //Sinal verde e amarelo ligados por 2 segundos Semaforo 1
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);
  delay(2000);

  //Sinal de pedestres aberto Semaforo 1
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  //Sinal de pedestres fechado Semaforo 2
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);

//Sinal verde para carros ligado por 15 segundos Semaforo 2
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(13000);

  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2000);
  
 
  
}
