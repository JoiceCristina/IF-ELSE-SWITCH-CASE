#include<stdio.h>

/*2) Faça um programa que receba a idade do atleta
e retorne a sua categoria no esporte.*/

int main(){
    int idade;

    printf("\nDigite a sua idade atleta: ");
    scanf("%i", &idade);

    if(idade >= 5 && idade <= 6){
        printf("Sua idade e %i e esta na categoria Mirim - A", idade);
    }
    else if(idade >= 7 && idade <= 8){
        printf("Sua idade e %i e esta na categoria Mirim - B", idade);
    }
    else if(idade >= 9 && idade <= 10){
        printf("Voce tem %i anos e esta na categoria Mirim - C", idade);
    }
    else if(idade >= 11 && idade <= 12){
        printf("Sua idade e %i e esta na categoria Infantil", idade);
    }
    else if(idade >= 13 && idade <= 14){
        printf("Voce tem %i anos e esta na categoria Infanto-Juvenil", idade);
    }
    else if(idade >= 15 && idade <= 17){
        printf("Voce tem %i anos e esta na categoria Juvenil", idade);
    }
    else if(idade >= 15 && idade <= 17){
        printf("Voce tem %i anos e esta na categoria Juvenil", idade);
    }
    else if(idade >= 18 && idade <= 35){
        printf("Voce tem %i anos e esta na categoria Adulto", idade);
    }
    else{
        printf("Voce tem %i anos e esta na categoria Master", idade);
    }
    return 0;
}
