	#include <stdio.h> // inclusão de biblioteca
 	#include <stdlib.h> // inclusão de biblioteca
 
 
  int main (){ // chamada da função principal
  	
  	float diametro, x, pi=3.141592, total; // declaração e atribuição de valor a variável "pi" e declaração das variáveis "diametro" "x" e "total"
  	
  	printf("Informe o diametro do circulo: "); // solicita ao usuário o diâmetro do circulo 
  		scanf("%f",&diametro); // imprime o valor recebido do usuário na variável diâmetro
  		
  		x = diametro/2; // faz a divisão do valor do diâmetro informado pelo usuário por 2 assim atribui o valor do raio a variável "x"
  		
  		total = (pow(x, 2) * pi); // o computador soluciona a equação para encontrar a área do circulo e após isso, grava o resultado na variável "total"
  		
  		printf("O valor da area do circulo e: %.1f\n",total); // é impresso na tela do usuário o valor da área do circulo, através do valor atribuido na variável "total"
  		
  		system("pause"); // pausa do programa
  	
  }
