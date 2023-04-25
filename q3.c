#include <stdio.h> // inclusão de biblioteca
#include <stdlib.h> // inclusão de biblioteca
 
 
  int main (){ // chamada da função principal
  	
  	int n1; // declaração da variável "n1"
  	
  		printf("Informe um numero: "); // solicita um número ao usuário
  		scanf("%d",&n1); // o número recebido do usuário é gravado na variável "n1"
  		
  		if(n1 %2 == 0){ // equação para identificar se o número é par ou impar, utilizando da divisão do número informado pelo usuário  por 2, e identificando sua natureza pela sobra do resultado dessa divisão
  			
  			printf("o numero e par\n"); // se a sobra do divisão for 0, o programa imprime ao usuário que esse número é par
  			
  		}
  		
  		else
  		
  			printf("o numero e impar\n"); // se a sobra for qualquer número diferente de 0, o programa imprime ao usuário que esse número é impar
  		
		  
	 system("pause"); // pausa do programa  
	}
  		
  	
