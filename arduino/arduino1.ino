/*Crie uma aplicação que possua 4 leds;

Ao iniciar a aplicação, você deve acionar os leds da esquerda para a direita, cada led deve ficar aceso por 2 segundos;

Ao chegar ao final você inverter o sentido, fazendo os leds piscarem a cada 1 segundo.*/

#define LedVermelho 2
#define LedVerde 3
#define LedAmarelo 4
#define LedCinza 5


void setup()
{
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
  pinMode(LedCinza, OUTPUT);
}


void loop()
{
  digitalWrite(LedVermelho, HIGH); //Liga Led Vermelho
  delay(2000); 
  digitalWrite(LedVermelho, LOW); //Desliga Led Vermelho
  delay(500); 
  digitalWrite(LedVerde, HIGH); //Liga Led Verde
  delay(2000); 
  digitalWrite(LedVerde, LOW); //Desliga Led Verde
  delay(500); 
  digitalWrite(LedAmarelo, HIGH); //Liga Led Verde
  delay(2000);
  digitalWrite(LedAmarelo, LOW); //Desliga Led Amarelo
  delay(500);
  digitalWrite(LedCinza, HIGH); //Liga Led Verde
  delay(2000);
  digitalWrite(LedCinza, LOW); //Desliga Led Amarelo
  delay(500);
  digitalWrite(LedAmarelo, HIGH); //Liga Led Verde
  delay(2000);
  digitalWrite(LedAmarelo, LOW); //Desliga Led Amarelo
  delay(500);
  digitalWrite(LedVerde, HIGH); //Liga Led Verde
  delay(2000); 
  digitalWrite(LedVerde, LOW); //Desliga Led Verde
  delay(500); 
  digitalWrite(LedVermelho, HIGH); //Liga Led Vermelho
  delay(2000); 
  digitalWrite(LedVermelho, LOW); //Desliga Led Vermelho
  delay(500);
}

