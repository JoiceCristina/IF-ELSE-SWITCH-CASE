#include <stdio.h>

/*3) Fa�a um programa que receba um n�mero.
O programa deve informar se:
O n�mero � positivo, negativo ou zero.
O n�mero � par ou �mpar

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

