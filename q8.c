#include <stdio.h> // inclus�o de biblioteca
#include <stdlib.h> // inclus�o de biblioteca

int main (){ // chamada da fun��o principal
	
	float temp, conv; // declar��o das vari�veis floats "temp" e "conv"
	
	printf("digite a temperatura em Celsius: "); // � solicitado ao usu�rio o valor da temperatura em celsius
	scanf("%f", &temp); // o valor recebido do usu�rio � gravado na vari�vel "temp"
	
	conv = (temp *1.8) + 32; // � feita a equa��o de convers�o pelo computador, e ap�s feita, � gravado o resultado na vari�vel conv
	
	printf ("a temperatura apos convertida em  Fahrenheit e: %d \n", (int) conv); // � impresso na tela do usu�rio o resultado da equa��o, com a convers�o do n�mero de float para inteiro
	
	system("pause"); //pausa do programa
	
}
