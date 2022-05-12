#include <stdio.h>

char categoria;
float media, quantidade, soma, total;
//Garantindo que a média é do tipo FLOAT

int main(void) {
//laço while estrutura repetitiva para continua com as execuções sucessivas do programa
  do{
    printf("informe a categoria:");
    setbuf(stdin,NULL);
    scanf("%c", &categoria);
    do{
    printf("informe a quantidade:");
    scanf("%f", &quantidade);
      }while (quantidade <= 0);
if (categoria == 'A' ||  categoria == 'B' || categoria == 'C' || quantidade != 0) //garantindo que a quatidade seja maior que 0 caso seja não entrar na média 
{
  
    soma = soma + quantidade;
    total++;
    media = soma / total; //garantindo acréscimo na soma do total evitando que seja feita a divisão por 0, calculo da média executada de forma correta
  }
  
  
  }

while (categoria == 'A' || categoria == 'B' || categoria == 'C');
  printf ("A média dos produtos é %.2f", media);

}