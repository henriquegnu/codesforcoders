/* Crie um programa que receba 3 notas de 4 alunos. Calcule a média de
cada aluno e a média da turma. Ao final, apresente as notas dos alunos, as
médias e a média da turma.

 Crie um programa que receba 3 valores. Calcule a soma dos dois
primeiros. O resultado obtido deve ser multiplicado pelo terceiro. Ao final,
apresente os números informados e o resultado da operação.*/

void setup()
{
  Serial.begin(115200); //inicia a comunicação tipo serial
}

void loop()
{
  float a1, a2, a3, a4, n1a1, n2a1, n3a1, n1a2, n2a2, n3a2,
  n1a3, n2a3, n3a3, n1a4, n2a4, n3a4, mediaA1 = 0,
    mediaA2 = 0, mediaA3 = 0, mediaA4 = 0, mediaTotal = 0; //declara as variáveis
  
  //primeiro aluno
  
  Serial.println("diga a primeira nota do primeiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n1a1
  n1a1 = Serial.parseFloat();
  
  Serial.println("diga a segunda nota do primeiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n2a1
  n2a1 = Serial.parseFloat();
  
  Serial.println("diga a terceira nota do primeiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n3a1
  n3a1 = Serial.parseFloat();
  
  mediaA1 = (n1a1 + n2a1 + n3a1)/3; //faz o calculo e grava em "mediaA1"
  
  //printa o resultado todo
  Serial.println("a media do aluno 1 e igual :");
  Serial.println(mediaA1);
  
   //segundo aluno
     
  Serial.println("diga a primeira nota do segundo aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n1a1
  n1a2 = Serial.parseFloat();
  
  Serial.println("diga a segunda nota do segundo aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n2a1
  n2a2 = Serial.parseFloat();
  
  Serial.println("diga a terceira nota do segundo aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n3a1
  n3a2 = Serial.parseFloat();
  
  mediaA2 = (n1a2 + n2a2 + n3a2)/3; //faz o calculo e grava em "mediaA2"
  
  //printa o resultado todo
  Serial.println("a media do aluno 2 e igual :");
  Serial.println(mediaA2);
   
   //terceiro aluno
  
  Serial.println("diga a primeira nota do terceiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n1a1
  n1a3 = Serial.parseFloat();
  
  Serial.println("diga a segunda nota do terceiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n2a1
  n2a3 = Serial.parseFloat();
  
  Serial.println("diga a terceira nota do terceiro aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n3a1
  n3a3 = Serial.parseFloat();
  
  mediaA3 = (n1a3 + n2a3 + n3a3)/3; //faz o calculo e grava em "mediaA3"
  
  //printa o resultado todo
  Serial.println("a media do aluno 3 e igual :");
  Serial.println(mediaA3);   
  
  //quarto aluno
  
  Serial.println("diga a primeira nota do quarto aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n1a4
  n1a3 = Serial.parseFloat();
  
  Serial.println("diga a segunda nota do quarto aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n2a4
  n2a3 = Serial.parseFloat();
  
  Serial.println("diga a terceira nota do quarto aluno");
  while(Serial.available() == 0){} //aguarda o usuário dar um valor para n3a4
  n3a3 = Serial.parseFloat();
  
  mediaA4 = (n1a3 + n2a3 + n3a3)/3; //faz o calculo e grava em "mediaA4"
  
  //printa o resultado todo
  Serial.println("a media do aluno 4 e igual :");
  Serial.println(mediaA4);
  
  //media de todos
  mediaTotal = (mediaA1 + mediaA2 + mediaA3 + mediaA4)/4; //faz o calculo da media de todos
  
  Serial.println("a media dos 4 alunos e igual: ");
  Serial.println(mediaTotal);
}
