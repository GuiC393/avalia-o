//Guilherme Canever QUESTÃO 03 
#include<stdlib.h>
#include<stdio.h>

int linf,lsup,nlinha,i,j,primo,pulalinha=0;
char repetir;

int main(void){

    do
    {
      
	  pulalinha=0;
      
	  printf("Infome o valor do limite inferior:");
	  scanf("%i",&linf);
      
	  while(linf<1){
      
    printf("\nlimite deve ser no minimo 1\nInforme o limite inferior:");
		scanf("%i",&linf);
      }
      
		printf("\nInforme o valor do limite superior:");
		scanf("%i",&lsup);
      
	  while(linf>lsup){
      
    printf("\nlimite superior deve ser maior ou igual ao inferior\nInforme o      limite superior:");
		scanf("%i",&lsup);}
      
		printf("\nInforme quantos numeros deseja imprimir por linha:");
		scanf("%i",&nlinha);
    	
	  for (i = linf; i <= lsup; i++)
    {
		if (i == 0 || i == 1) 
    {
			
			primo = 0;
		} 
    else {
      
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) 
        {
					primo = 0;
				
          }
        }
      }
		if (primo == 1) {
      
			printf("%i ", i);
			pulalinha++;
      
			if(pulalinha>=nlinha){
        
				printf("\n");
				pulalinha=0;
			
        }
      }
    }

    printf("\n\nDeseja repetir o programa <S ou N>?");
    scanf(" %c",&repetir);	
      
    }
      while(repetir=='S'||repetir=='s'); //função ou apenas para o usuario poder digitar S maiucuslo ou minusculo

	return 0;
}