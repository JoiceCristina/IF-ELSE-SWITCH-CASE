#include <stdio.h>

/*4) Com base no sexo, altura e peso, calcule o IMC.
Para tal, considere: IMC = peso / ( Altura * Altura ).
A partir do resultado, apresente a classificação conforme tabelas apresentadas abaixo.
Indique também qual faixa de peso eu devo estar pra ficar no peso ideal.
*/
int main(){

    float a, p, imc;
    char sexo;

    printf("Digite seu sexo(M/F): ");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &a);

    printf("Digite seu peso: ");
    scanf("%f", &p);



    imc = p / (a*a);

    printf("O seu IMC e: %.2f\n", imc);

    if(sexo == 'M'){
        if(imc < 20.7){
            printf("Seu sexo e: %c. Esta abaixo do peso", sexo);
        }
        else if(imc >= 20.7 && imc < 26.4) {
            printf("Seu sexo e: %c. Esta no peso ideal", sexo);
        }
        else if (imc >= 26.5 && imc < 27.8){
            printf("Seu sexo e: %c. Esta um pouco acima do peso", sexo);
        }
        else if (imc >= 27.9 && imc < 31.1){
            printf("Seu sexo e: %c. Esta acima do peso", sexo);
        }
        else if (imc > 31.2){
            printf("Seu sexo e: %c. Obesidade", sexo);
        }
    }

    else {
        if(imc < 19.1){
            printf("Seu sexo e: %c. Esta abaixo do peso", sexo);
        }
        else if(imc >= 19.1 && imc < 25.8) {
            printf("Seu sexo e: %c. Esta no peso ideal", sexo);
        }
        else if (imc >= 25.9 && imc < 27.3){
            printf("Seu sexo e: %c. Esta um pouco acima do peso", sexo);
        }
        else if (imc >= 27.4 && imc < 32.3){
            printf("Seu sexo e: %c. Esta acima do peso", sexo);
        }
        else if (imc > 32.4){
            printf("Seu sexo e: %c. Obesidade", sexo);
        }
    }


    return(0);
}


