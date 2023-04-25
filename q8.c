#include <stdio.h> // inclusão de biblioteca
#include <stdlib.h> // inclusão de biblioteca

int main (){ // chamada da função principal
	
	float temp, conv; // declarção das variáveis floats "temp" e "conv"
	
	printf("digite a temperatura em Celsius: "); // é solicitado ao usuário o valor da temperatura em celsius
	scanf("%f", &temp); // o valor recebido do usuário é gravado na variável "temp"
	
	conv = (temp *1.8) + 32; // é feita a equação de conversão pelo computador, e após feita, é gravado o resultado na variável conv
	
	printf ("a temperatura apos convertida em  Fahrenheit e: %d \n", (int) conv); // é impresso na tela do usuário o resultado da equação, com a conversão do número de float para inteiro
	
	system("pause"); //pausa do programa
	
}
