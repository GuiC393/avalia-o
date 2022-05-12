//Guilherme Canever QUESTÃO 06
#include <stdio.h>

int numeropositivo, cont=1, contar;
char repetir;

int main (void){

    do
    {

    cont = 0;

	  printf("digite um numero positivo:\n");
	  scanf("%d", &numeropositivo);
    while(numeropositivo <= 0)
    {
        printf("digite um numero positivo: ");
        scanf("%d", &numeropositivo);
    }

	  while (cont <= numeropositivo)
    {	
	    printf (" \n");

	  for (contar = 1; contar <= cont; contar++) 
        {
		    printf (" %d ", cont);
        }
        cont++;
    }  

        printf("\n\n digitar outro numero? <S ou N>\n");
        scanf(" %c", &repetir);

    }while(repetir == 'S' || repetir == 's'); //função OU apenas para o usuario poder digitar S maiusculo ou minucsculo 

    return 0;
} 