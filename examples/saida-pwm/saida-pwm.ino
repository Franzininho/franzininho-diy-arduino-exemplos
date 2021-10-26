/***************************************************************
  Saida PWM
  
  Nesse exemplo vamos Aprender a usar a saida PWM. Vamos controlar
  o brilho de um LED conforme a posição do potenciometro

  Autor: Fábio Souza
***************************************************************/

const byte LED = 1; //pino do LED
const byte POT = A1; //pino do Potenciômetro

void setup() {
  pinMode(LED,OUTPUT);    //configura o pino de LED como saída
}

void loop() {

  int valor = analogRead(POT); // lê o valor do potenciômetro
  analogWrite(LED,valor/4);    //escreve no LED valor entre 0 e 255

}
