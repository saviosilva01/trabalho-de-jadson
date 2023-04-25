 #include <stdio.h>  // inclusão de biblioteca
 #include <stdlib.h> // inclusão de biblioteca
 
 
  int main (){ // chamada da função principal
  	
  	int a, b, soma; // declaração das variáveis inteiras "a", "b" e "soma"  
  	
  		printf("Informe um primeiro numero: "); // imprime na tela solicitando um número ao usuário
  		scanf("%d",&a); // gravação do número recebido do usuário na variável "a"
  	
  		printf("Informe um segundo numero: "); //imprime na tela solicitando um segundo número ao usuário
  		scanf("%d",&b); // gravação do segundo número recebido do usuário na variável "b"
  		
  		soma = a+b; // atribui valor a variavel "soma" através da adição das variáveis "a" + "b"
  		
  		printf("A soma dos dois numeros e: %d\n",soma); // é impresso na tela o resultado da soma das variáveis
  	
  	system("pause"); //pausa do programa
  	
  }
