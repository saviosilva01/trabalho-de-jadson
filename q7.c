#include <stdio.h> // inclus�o de biblioteca
#include <stdlib.h> // inclus�o de biblioteca

int main (){ // chamada da fun��o principal
	
	int idade; // declara��o da vari�vel inteira "idade"
	
	printf("informe sua idade: "); // � solicitado ao usu�rio sua idade
	scanf("%d", &idade); // o valor recebido do usu�rio � gravado na vari�vel "idade"
	
		if(idade>=18){ // o if identifica se o n�mero recebido � maior, igual ou menor do que o valor atribuido a vari�vel "idade"
		printf("usuario maior de idade \n"); //se o valor da vari�vel for maior ou igual a 18, � impresso na tela que o usu�rio � maior de idade 
	}
		else
		printf("usuario menor de idade \n"); //se o valor da vari�vel for menor que 18, � impresso na tela que o usu�rio � menor de idade 
		
		system("pause"); //pausa do programa
	
	
}
