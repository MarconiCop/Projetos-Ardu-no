/*******************************************************************************
* Kit Iniciante para Arduino v8 - Exercício Projeto Semáforo
* Projeto de um semáforo de carros e de pedestres com pisca-pisca.
*******************************************************************************/

const int pino_a = 6; 
  const int pino_b = 7; 
  const int pino_c = 9; 
  const int pino_d = 8; 
  const int pino_e = 4; 
  const int pino_f = 5; 
  const int pino_g = 3; 
  


void setup(){
  // Configura os pinos com os LEDs como saída
  pinMode(10, OUTPUT); //Buzzer
  pinMode(11, OUTPUT); // LED verde carros
  pinMode(12, OUTPUT); // LED amarelo carros
  pinMode(13, OUTPUT); // LED vermelho carros

  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
  pinMode(pino_e, OUTPUT);
  pinMode(pino_f, OUTPUT);
  pinMode(pino_g, OUTPUT);


 
}

void loop(){


  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo
  
  //Buzzer frequência alta
  tone(10,3000); // gera frequencia de 3000Hz no buzzer
  delay(500);
  noTone(10); // para frequencia no buzzer
  delay(500);
  
  // Sinal para carros aberto: apaga LED vermelho, acende LED verde
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(4000);

  //Buzzer frequência média
  tone(10,2000); // gera frequencia de 2000Hz no buzzer
  delay(500);
  noTone(10); // para frequencia no buzzer
  delay(500);

  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo

  
  // Sinal para carros fechando: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(3500);

  //Buzzer frequência baixa
  tone(10,1000); // gera frequencia de 1000Hz no buzzer
  delay(500);
  noTone(10); // para frequencia no buzzer
  delay(500);

  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo


  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); // aguarda 1 segundo

  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); // aguarda 1 segundo


  

  // Sinal para carros fechado: apaga LED verde, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(5000);

}
