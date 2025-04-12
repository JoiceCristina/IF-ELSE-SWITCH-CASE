#include<stdio.h>
/*
7) Crie um programa que simule um sistema bancário simples.
O usuário poderá realizar operações como depósito, saque, transferência e consulta de saldo por meio de um menu interativo.
*/
int main(){
    float saldo = 1000.0;
    int opcao;
    float valor;

    menu:
    printf("\n========= MENU BANCO =========\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar dinheiro\n");
    printf("3 - Sacar dinheiro\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nSeu saldo atual e: R$ %.2f\n", saldo);
            goto menu;

        case 2:
            printf("Digite o valor para depositar: R$ ");
            scanf("%f", &valor);
            if (valor > 0) {
                saldo += valor;
                printf("Deposito realizado com sucesso. Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Valor invalido para deposito.\n");
            }
            goto menu;

        case 3:
            printf("Digite o valor para sacar: R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido para saque.\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente. Seu saldo atual e: R$ %.2f\n", saldo);
            } else {
                saldo -= valor;
                printf("Saque realizado com sucesso. Novo saldo: R$ %.2f\n", saldo);
            }
            goto menu;

        case 4:
            printf("Saindo do sistema.\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            goto menu;
        }


    return 0;
}
