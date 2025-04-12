#include <stdio.h>

/*1) Faça um programa que receba um  valor inteiro entre 0 e 24, referente à hora.
Com base no horário, o programa deve retornar:

Bom dia (0-12),
Boa tarde (12-18)
ou Boa noite (18-24).

*/

int main (){
	int x;

	printf("\nDigite um valor entre 0 e 24: ");
	scanf("%i", &x);

	if(x >= 0 && x < 12){
		printf("Bom dia pessoa!");
	}
	else if (x >= 12 && x < 18){
		printf("Boa tarde pessoa!");
	}
	else if (x >= 18 && x < 24){
		printf("Boa noite pessoa!");
	}

	else{
        printf("Valor invalido");
	}

    return 0;

}
