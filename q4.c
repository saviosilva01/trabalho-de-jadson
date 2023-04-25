	#include <stdio.h> // inclusão de biblioteca 
 	#include <stdlib.h> // inclusão de biblioteca
 
 
  int main (){ // chamada da função principal
  	
  	float n1, n2, n3, ma; // declaração das variáveis floats "n1", "n2", "n3" e "ma"
  	
  	printf("Informe um primeiro numero: "); // solicita ao usuário um primeiro número
  		scanf("%f",&n1); //após recebido do usuário, é feita a gravação do primeiro número na variável "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usuário um segundo número
  		scanf("%f",&n2); //após recebido do usuário, é feita a gravação do segundo número na variável "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usuário um terceiro número
  		scanf("%f", &n3); //após recebido do usuário, é feita a gravação do terceiro número na variável "n3"
  		
  		ma = (n1+n2+n3)/2; // é feita a soma dos três números solicitados ao usuário, e após isso, dividido por 2, seu resultado é gravado na variável "ma"
  		
  		printf("a media aritmetica de %.1f, %.1f e %.1f e igual a = %.1f\n", n1, n2, n3, ma); // é impresso ao usuário a media aritmetica dos valores solicitados a ele através do valor gravado na variável "ma"
  		
  		system("pause"); //pausa do programa
  		
  	}
