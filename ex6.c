#include<stdio.h>

/*6) Você foi contratado para desenvolver uma parte de um sistema de recomendação de filmes.

Sua tarefa é criar um programa simples que exibe Filmes com base no gênero escolhido pelo usuário.
*/
int main(){
    int opcao;

    printf("Escolha um genero de filme:\n 1 - Acao\n 2 - Comedia\n 3 - Drama\n 4 - Ficcao Cientifica\n 5 - Terror\n");
    scanf("%i", &opcao);

    switch (opcao){
        case 1:
            printf("\nFilmes de Acao:");
            printf("\n- Mad Max: Estrada da Furia\n- John Wick\n- Missao Impossivel\n");
            break;


        case 2:
            printf("\nFilmes de Comedia:");
            printf("\n- As Branquelas\n- O Maskara\n- Se Beber, Nao Case\n");
            break;

        case 3:
            printf("\nFilmes de Drama:");
            printf("\n- A Procura da Felicidade\n- Clube da Luta\n- O Curioso Caso de Benjamin Button\n");
            break;


        case 4:
            printf("\nFilmes de Ficcao Cientifica:");
            printf("\n- Interestelar\n- Matrix\n- Blade Runner 2049\n");
            break;



        case 5:
            printf("\nFilmes de Terror:");
            printf("\n- Invocacao do Mal\n- O Exorcista\n- O Exorcista\n");
            break;




        default :
            printf("Opcao invalida. Tente novamente\n");
    }
    return 0;
}
