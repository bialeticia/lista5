// 6. Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao usu�rio, 
// onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio informar esta regi�o, 
// limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:
// Menu de Op��es
// ============
// 1 � Norte
// 2 � Nordeste
// 3 � Centro-Oeste
// 4 � Sudeste
// 5 � Sul
// 0 � Sair do programa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcaoMenu, norte, nordeste, centrooeste, sudeste, sul; 

	do{
system ("cls");
        printf("MENU PRINCIPAL \n\n\n");
        printf("|1| Norte \n\n");
        printf("|2| Nordeste \n\n");
        printf("|3| Centro-Oeste \n\n");
        printf("|4| Sudeste \n\n");
        printf("|5| Sul \n");
        printf("\n|6| Sair do programa \n\n");
        printf("\nDIGITE A OP��O DESEJADA: ");
        scanf("%d", &opcaoMenu);
   
system ("cls");

    switch(opcaoMenu){
       
	    case 1: 
        printf ("A regi�o do Brasil que gostaria de conhecer � o Norte!");
    break;
        
		case 2: 
		printf ("A regi�o do Brasil que gostaria de conhecer � o Nordeste!");
    break; 
        
		case 3: 
		printf ("A regi�o do Brasil que gostaria de conhecer � o Centro-Oeste!");
    break;  
        
        case 4: 
		printf ("A regi�o do Brasil que gostaria de conhecer � o Sudeste!");
    break; 
        
        case 5: 
		printf ("A regi�o do Brasil que gostaria de conhecer � o Sul!");
    break; 
    
    	case 6:	
		printf("bye bye \n");
	break;
	}
	}

while(1);
return 0;
	
}
