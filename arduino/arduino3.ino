//Fez um sistema que recebe um dado e dependendo do dado ele aciona um LED específico.
//LINK DEMONSTRAÇÃO ARDUINO: https://github.com/henriquegnu/codesforcoders/blob/31e720b5405095b5255e21680228a3428e524227/arduino/imagens/Exemplo%201%20Aula%204.png

#define ledVE 3
#define ledVER 2
#define ledAZL 4

void setup()
{
  //define o tipo de dado que será utilizado
  //qual tipo será feito
  
  pinMode(ledAZL, OUTPUT);
  pinMode(ledVE, OUTPUT);
  pinMode(ledVER, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  float nota; //declara as variáveis
  
  Serial.println("Informe uma nota");
  while(Serial.available() == 0) {}
  nota = Serial.parseFloat();
  
  
  //feita a decisão
  
  if(nota >= 7){
    digitalWrite(ledVER, HIGH); 
  }
  
  if(nota < 7){
    digitalWrite(ledVE, HIGH);
  }
  
  
  if(nota == 10){
  	digitalWrite(ledAZL, HIGH); 
  }
  
  delay(3000);
  digitalWrite(ledVE, LOW);
  digitalWrite(ledVER, LOW); 
  digitalWrite(ledAZL, LOW);
}
