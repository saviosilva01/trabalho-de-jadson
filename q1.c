 #include <stdio.h>  // inclus�o de biblioteca
 #include <stdlib.h> // inclus�o de biblioteca
 
 
  int main (){ // chamada da fun��o principal
  	
  	int a, b, soma; // declara��o das vari�veis inteiras "a", "b" e "soma"  
  	
  		printf("Informe um primeiro numero: "); // imprime na tela solicitando um n�mero ao usu�rio
  		scanf("%d",&a); // grava��o do n�mero recebido do usu�rio na vari�vel "a"
  	
  		printf("Informe um segundo numero: "); //imprime na tela solicitando um segundo n�mero ao usu�rio
  		scanf("%d",&b); // grava��o do segundo n�mero recebido do usu�rio na vari�vel "b"
  		
  		soma = a+b; // atribui valor a variavel "soma" atrav�s da adi��o das vari�veis "a" + "b"
  		
  		printf("A soma dos dois numeros e: %d\n",soma); // � impresso na tela o resultado da soma das vari�veis
  	
  	system("pause"); //pausa do programa
  	
  }
