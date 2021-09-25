/***************************************************************
  Entrada Analógica
  
  Nesse exemplo vamos ler o valor de uma entrada analógica 
  na Franzininho DIY e acionar um LED conforme o valor determinado
  pelo potonciômetro

  Autor: Fábio Souza
***************************************************************/

const byte LED = 1; //pino do LED
const byte POT = A1; //pino do Potenciômetro

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {

  int valor = analogRead(POT); // lê o valor do potenciômetro

  if(valor> 511){              //se valor maior que 511
    digitalWrite(LED,HIGH);    //liga LED
  }else{                       //se não
    digitalWrite(LED,LOW);     //apaga LED
  }
}
