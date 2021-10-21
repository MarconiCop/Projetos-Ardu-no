
const int pinoLDR = A0; // pino LRD
const int pinoLED = 7; // pino LED
int leitura = 0; // Leitura do RRD iniciando como 0.
const int pinoBuzzer = 10; //Buzzer

void setup() {
  
  Serial.begin(9600); // Iniciar o monitor serial
  //Configuração do LED, do sensor LRF e do Buzzer
  pinMode(pinoLDR, INPUT); 
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  //A variável lê a luminosidade do sensor LRD e imprime no monitor serial
  leitura = analogRead(pinoLDR);
  Serial.print(" Leitura do sensor: ");
  Serial.print(leitura);
  

  //Verifica luminosidade para acebder o LED
  if(leitura < 400){ //Para o exercício, consideramos luminosidade baixa, se o valor for inferior a 400.
    digitalWrite(pinoLED,HIGH); //Acende o LED se for baixa
    tone(pinoBuzzer, 1000); // Toca o buzzer
  }
  else { // se não
    digitalWrite(pinoLED,LOW); // apaga o LED se for alta.
    noTone(pinoBuzzer); //Desliga o buzzer
  }
  
  delay(2000); // aguarda 2 segundos para atualização da luminosidade
}
