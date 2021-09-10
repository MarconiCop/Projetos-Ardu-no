void setup() {
  
  // 10 LEDs definidos
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(4, OUTPUT); 
  

}

void loop() {

  //Primeiro LED acende por 1 segundo
 digitalWrite(13, HIGH);
 delay(1000);
 
 //Segundo LED acende por 1 segundo
 digitalWrite(13, LOW);
 digitalWrite(12, HIGH);
 delay(1000);

 //Terceiro LED acende por 1 segundo
 digitalWrite(12, LOW);
 digitalWrite(11, HIGH);
 delay(1000);

 //Quarto LED acende por 1 segundo
 digitalWrite(11, LOW);
 digitalWrite(10, HIGH);
 delay(1000);

 //Quinto LED acende por 1 segundo
 digitalWrite(10, LOW);
 digitalWrite(9, HIGH);
 delay(1000);

//Sexto LED acende por 1 segundo
 digitalWrite(9, LOW);
 digitalWrite(8, HIGH);
 delay(1000);

//Sétimo LED acende por 1 segundo
 digitalWrite(8, LOW);
 digitalWrite(7, HIGH);
 delay(1000);

 //Oitavo LED acende por 1 segundo
 digitalWrite(7, LOW);
 digitalWrite(6, HIGH);
 delay(1000);

 //Nono LED acende por 1 segundo
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
 delay(1000);

 //Décimo LED acende por 1 segundo
 digitalWrite(5, LOW);
 digitalWrite(4, HIGH);
 delay(1000);

 //Desliga o décimo LED
 digitalWrite(4, LOW);

 //Acende todos os LEDs por 1 segundo
 digitalWrite(13, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(4, HIGH);
 delay(1000);


//Desliga todos os LEDs

 digitalWrite(13, LOW);
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 digitalWrite(10, LOW);
 digitalWrite(9,  LOW);
 digitalWrite(8,  LOW);
 digitalWrite(7,  LOW);
 digitalWrite(6,  LOW);
 digitalWrite(5,  LOW);
 digitalWrite(4,  LOW);

}
