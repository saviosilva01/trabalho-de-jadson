#include <stdio.h> // inclus�o de biblioteca
 #include <stdlib.h> // inclus�o de biblioteca
 
 
  int main (){ // chamada da fun��o principal
  	
  	int x, ant, suc; // declara��o das vari�veris inteiras "x", "ant" e "suc"
  	
  		printf("Informe um  numero: "); // solicita um n�mero ao usu�rio
  		scanf("%d",&x); // o n�mero recebido do usu�rio � gravado na vari�vel "x"
  		
  		ant = x-1; // � feita a subtra��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "ant"
  		suc = x+1; // � feita a adi��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "suc"
  		
  		printf("O seu antecessor e: %d\n", ant); // � impresso na tela do usu�rio o valor gravado vari�vel "ant"
  		printf("O seu sucessor e: %d\n", suc); // � impresso na tela do usu�rio o valor gravado vari�vel "suc"
  		
  		system("pause"); //pausa do programa
  		
  	}
