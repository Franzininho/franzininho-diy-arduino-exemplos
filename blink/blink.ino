/***************************************************************
  Pisca LED
  
  Esse exemplo exibe como piscar o LED presente na placa ou 
  um LED externo ligado ao pino 1 da Franzininho DIY 
  em intervalos de 1 segundo.

  Autor: Fábio Souza
***************************************************************/

const int LED = 1;      //Mapeamento do pino do LED em uma constante

//função - Executado ao início
void setup(){
  pinMode(LED,OUTPUT); //pino digital de saída
}

//função Loop - fica em loop infitamente
void loop(){
  digitalWrite(LED,HIGH);   //acende o led da placa
  delay(1000);              //aguarda 1 s
  digitalWrite(LED,LOW);    //apaga o led da placa
  delay(1000);              //aguarda 1 s
}
