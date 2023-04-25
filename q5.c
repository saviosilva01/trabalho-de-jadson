#include <stdio.h> // inclusão de biblioteca
 #include <stdlib.h> // inclusão de biblioteca
 
 
  int main (){ // chamada da função principal
  	
  	int x, ant, suc; // declaração das variáveris inteiras "x", "ant" e "suc"
  	
  		printf("Informe um  numero: "); // solicita um número ao usuário
  		scanf("%d",&x); // o número recebido do usuário é gravado na variável "x"
  		
  		ant = x-1; // é feita a subtração do número recebido do usuário por 1, e após isso, é feita a gravação do resultado na variável "ant"
  		suc = x+1; // é feita a adição do número recebido do usuário por 1, e após isso, é feita a gravação do resultado na variável "suc"
  		
  		printf("O seu antecessor e: %d\n", ant); // é impresso na tela do usuário o valor gravado variável "ant"
  		printf("O seu sucessor e: %d\n", suc); // é impresso na tela do usuário o valor gravado variável "suc"
  		
  		system("pause"); //pausa do programa
  		
  	}
