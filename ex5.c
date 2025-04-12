#include <stdio.h>

/*5) Faça um programa para responder se uma pessoa pode aposentar, com base nas regras abaixo:
 - Mulheres: 58 anos de idade e 30 anos de contribuição
 - Homens: 63 anos de idade e 35 anos de contribuição
Caso a pessoa ainda não possa se aposentara, informar quanto tempo falta.
*/

int main (){
	int idade, ac, idadeMin, acMin, faltaI, faltaC;
    char sexo;

    printf("Digite seu sexo(M/F): ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite os anos de contribuicao: ");
    scanf("%i", &ac);

    if(sexo == 'F' || sexo == 'f' ){
        idadeMin = 58;
        acMin = 30;
    }
    else if (sexo == 'M' || sexo == 'm' ){
        idadeMin = 63;
        acMin = 35;
    }
    else{
        printf("Sexo invalido. Digite M ou F");
    }

    if (idade >= idadeMin && ac >=acMin){
        printf("\nSua idade e %i e tem %i anos de contribuicao.\n", idade, ac);
        printf("Voce pode se aposentar.");
    }
    else{
        faltaI = idadeMin - idade;
        faltaC = acMin - ac;
        printf("\nSua idade e %i e tem %i anos de contribuicao.\n", idade, ac);
        printf("Faltam %i anos de idade e %i anos de contribuicao.", faltaI, faltaC);
    }


    return 0;

}

