
//Portas
const int echo=13; 
const int trigger=12; 



const int pino_led_vermelho = 11; 
const int pino_led_amarelo = 10; 
const int pino_led_verde = 9; 

const int pinoBuzzer = A5;

const int pino_g = 7;
const int pino_f = 6;
const int pino_a = 4; 
const int pino_b = 5; 
const int pino_c = 3; 
const int pino_d = 2; 
const int pino_e = 8;
float dist;

void setup(){
  
  //Definir portas
  pinMode(echo,INPUT);
  pinMode(trigger,OUTPUT);
  
  pinMode(pinoBuzzer, OUTPUT);
  
  pinMode(pino_led_vermelho, OUTPUT); 
  pinMode(pino_led_amarelo, OUTPUT); 
  pinMode(pino_led_verde, OUTPUT);
  
  pinMode(pino_g, OUTPUT); 
  pinMode(pino_f, OUTPUT); 
  pinMode(pino_a, OUTPUT); 
  pinMode(pino_b, OUTPUT); 
  pinMode(pino_c, OUTPUT); 
  pinMode(pino_d, OUTPUT); 
  pinMode(pino_e, OUTPUT); 
  

  //Ligar monitor
  Serial.begin(9600);
}

void loop(){
  //desliga o envio de pulsos por 5 microsegundos
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);      
  
  //envia pulsos por 10 microsegundos
  digitalWrite(trigger,HIGH);  
  delayMicroseconds(10);     
  
  //desliga o envio de pulsos
  digitalWrite(trigger,LOW); 
  
  //calcula a distância
  dist = pulseIn(echo,HIGH);      
  dist = dist/58; // conversão em centímetros
  dist = dist/100; // Ccnversão para metros

   digitalWrite(pino_led_verde,LOW);
   digitalWrite(pino_led_amarelo,LOW);
   digitalWrite(pino_led_vermelho,LOW);
   
   
  //---------------------------------------------------------------------------- 
  if(dist > 2){
    digitalWrite(pino_led_verde,HIGH);
    noTone(pinoBuzzer);
    
  }else if( dist >=1 && dist <= 2){
    
    digitalWrite(pino_led_verde,HIGH);
    digitalWrite(pino_led_amarelo,HIGH);
    
    if(dist >=1 && dist <=2){
        tone(pinoBuzzer, 1000);
      delay(1000);
      noTone(pinoBuzzer);
      delay(1000);
    }else{
      noTone(pinoBuzzer);
    }
    
  }else if(dist <1){
     digitalWrite(pino_led_verde,HIGH);
     digitalWrite(pino_led_amarelo,HIGH);
     digitalWrite(pino_led_vermelho,HIGH);
    tone(pinoBuzzer, 1000);
     
  }
  
  
  //--------------------------------------------------------------

  if(dist < 0.10){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, HIGH);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, LOW);
    delay(1000);
  }else if(dist >=0.10 && dist <0.20){
    digitalWrite(pino_a, LOW);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, LOW);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, LOW);
    digitalWrite(pino_g, LOW);
    delay(1000);
  }else if(dist >=0.20 && dist <0.30){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, LOW);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, HIGH);
    digitalWrite(pino_f, LOW);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.30 && dist<0.40){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, LOW);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.40 && dist <0.50){
    digitalWrite(pino_a, LOW);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, LOW);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.50 && dist <0.60){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, LOW);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.60 && dist <0.70){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, LOW);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, HIGH);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.70 && dist <0.80){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, LOW);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, LOW);
    digitalWrite(pino_g, LOW);
    delay(1000);
  }else if(dist >=0.80 && dist <0.90){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, HIGH);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }else if(dist >=0.90){
    digitalWrite(pino_a, HIGH);
    digitalWrite(pino_b, HIGH);
    digitalWrite(pino_c, HIGH);
    digitalWrite(pino_d, HIGH);
    digitalWrite(pino_e, LOW);
    digitalWrite(pino_f, HIGH);
    digitalWrite(pino_g, HIGH);
    delay(1000);
  }
  
  Serial.print ("Distancia = ");
  Serial.print (dist);         
  Serial.print (" m");         
  Serial.write("\n");            
  delay(2000); 
  }
   
