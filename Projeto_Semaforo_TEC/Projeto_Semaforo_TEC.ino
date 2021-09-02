void setup(){
  pinMode(9, OUTPUT); // LED verde pedestres
  pinMode(10, OUTPUT); // LED vermelho pedestres
  pinMode(11, OUTPUT); // LED verde carros
  pinMode(12, OUTPUT); // LED amarelo carros
  pinMode(13, OUTPUT); // LED vermelho carros
}

void loop(){

  //Sinal de pedestres fechado
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  //Sinal verde para carros ligado por 13 segundos
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(13000);

 //Sinal verde e amarelo ligados por 2 segundos
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);

  //Sinal de pedestres aberto
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  
  //Sinal vermelho para carros ligado por 15 segundos
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(15000);
  
}
