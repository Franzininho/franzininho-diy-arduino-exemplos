/***************************************************************
  Entrada e saída digital
  
  Vamos ler o estado da tecla ligada ao pino P2 e acionar o 
  LED ligado a pino P1 conforme o seu estado
  
  Autor: Fábio Souza
***************************************************************/

const int LED = 1;        //pino para o LED
const int BOTAO = 2;      //pino para o botão

int val = 0;              // val será utilizado para armazenar o estado do pino

void setup(){
  pinMode(LED,OUTPUT);    //o LED é uma saída
  pinMode(BOTAO,INPUT);  //o BOTAO é uma entrada
}

void loop (){
  val = digitalRead(BOTAO); // lê e armazena o valor de entrada
  digitalWrite(LED, val); //aciona LED conforme valor lido do botão
}
