	#include <stdio.h> // inclus�o de biblioteca
 	#include <stdlib.h> // inclus�o de biblioteca
 
 
  int main (){ // chamada da fun��o principal
  	
  	float diametro, x, pi=3.141592, total; // declara��o e atribui��o de valor a vari�vel "pi" e declara��o das vari�veis "diametro" "x" e "total"
  	
  	printf("Informe o diametro do circulo: "); // solicita ao usu�rio o di�metro do circulo 
  		scanf("%f",&diametro); // imprime o valor recebido do usu�rio na vari�vel di�metro
  		
  		x = diametro/2; // faz a divis�o do valor do di�metro informado pelo usu�rio por 2 assim atribui o valor do raio a vari�vel "x"
  		
  		total = (pow(x, 2) * pi); // o computador soluciona a equa��o para encontrar a �rea do circulo e ap�s isso, grava o resultado na vari�vel "total"
  		
  		printf("O valor da area do circulo e: %.1f\n",total); // � impresso na tela do usu�rio o valor da �rea do circulo, atrav�s do valor atribuido na vari�vel "total"
  		
  		system("pause"); // pausa do programa
  	
  }
