// 2. Desenvolva um programa em C que leia tr�s valores num�ricos e apresente o maior valor informado no meio de uma janela limpa.

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <math.h> 
#include <ctype.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int numeroUm, numeroDois, numeroTres, maior;


    	printf ("Informe o primeiro valor: ");
		scanf ("%d", &numeroUm);
		
		printf ("\nInforme o segundo valor: ");
		scanf ("%d", &numeroDois);
		
		printf ("\nInforme o terceiro valor: ");
		scanf ("%d", &numeroTres);
		
		if((numeroUm >= numeroDois) && (numeroUm >= numeroTres)){
		maior = numeroUm;
		}
		
		else if((numeroDois >= numeroUm) && (numeroDois >= numeroTres)){
	    maior = numeroDois;
		}
		
		else{
		maior = numeroTres;
		}

system("cls"); 	
		
	printf ("Maior n�mero: %d", maior);

return 0;

}
