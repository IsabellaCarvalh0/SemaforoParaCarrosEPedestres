void setup(){
  // Configura os pinos dos LEDs como saida
  pinMode(9, OUTPUT); // LED verde pedestre
  pinMode(10, OUTPUT); // LED vermelho pedestre
  pinMode(11, OUTPUT); // LED verde
  pinMode(12, OUTPUT); // LED amarelo
  pinMode(13, OUTPUT); // LED vermelho
}

void loop(){
   // Sinal para pedestres fechado: apaga led verde, acende led vermelho
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  // Sinal para carros aberto: apaga LED vermelho, acende LED verde
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);
  
  // Sinal para carros fechado: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
  
  // Sinal para pedestres aberto: apaga led vermelho, acende led verde
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  
  // Sinal para carros fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(5000);
}
