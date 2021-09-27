
const int pinoPotenciometroVerde = A0; //Controle de verde
const int pinoLEDGREEN = 10; // LED VERDE

int leituraVerde = 0; //Leitura Verde
int pwmVerde = 0; // Armazenamento Verde

void setup() {
  pinMode(pinoPotenciometroVerde, INPUT); //Controle de verde
 
}

void loop() {

  leituraVerde = analogRead(pinoPotenciometroVerde);
  pwmVerde = map(leituraVerde, 0, 1023, 0, 255); 
  analogWrite(pinoLEDGREEN, pwmVerde);
}
