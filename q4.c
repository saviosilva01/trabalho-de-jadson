	#include <stdio.h> // inclus�o de biblioteca 
 	#include <stdlib.h> // inclus�o de biblioteca
 
 
  int main (){ // chamada da fun��o principal
  	
  	float n1, n2, n3, ma; // declara��o das vari�veis floats "n1", "n2", "n3" e "ma"
  	
  	printf("Informe um primeiro numero: "); // solicita ao usu�rio um primeiro n�mero
  		scanf("%f",&n1); //ap�s recebido do usu�rio, � feita a grava��o do primeiro n�mero na vari�vel "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usu�rio um segundo n�mero
  		scanf("%f",&n2); //ap�s recebido do usu�rio, � feita a grava��o do segundo n�mero na vari�vel "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usu�rio um terceiro n�mero
  		scanf("%f", &n3); //ap�s recebido do usu�rio, � feita a grava��o do terceiro n�mero na vari�vel "n3"
  		
  		ma = (n1+n2+n3)/2; // � feita a soma dos tr�s n�meros solicitados ao usu�rio, e ap�s isso, dividido por 2, seu resultado � gravado na vari�vel "ma"
  		
  		printf("a media aritmetica de %.1f, %.1f e %.1f e igual a = %.1f\n", n1, n2, n3, ma); // � impresso ao usu�rio a media aritmetica dos valores solicitados a ele atrav�s do valor gravado na vari�vel "ma"
  		
  		system("pause"); //pausa do programa
  		
  	}
