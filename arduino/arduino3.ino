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
