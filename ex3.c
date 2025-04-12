#include <stdio.h>

/*3) Faça um programa que receba um número.
O programa deve informar se:
O número é positivo, negativo ou zero.
O número é par ou ímpar

*/

int main (){
	int x;

	printf("\nDigite um numero: ");
	scanf("%i", &x);

	if(x % 2 == 0) {
         printf("O %i e um numero par ", x);
	} else{
        printf("O %i e um numero impar", x);
	}

	if (x < 0){
        printf("\nO %i e um numero negativo ", x);
	}

	else if (x > 0){
        printf("\nO %i e um numero positivo ", x);
	}

	else{
        printf("\nO %i e zero", x);
	}

    return 0;

}

