/******************************************************************************

Crie um programa em linguagem c que sirva para gestão de vendas.
faça um menu para orientar o usuário. No menu tem que ter: as seguintes opções
1 - Consultar estoque (mostrando produtos do 1 ao 5,camisetas,sapatos,bermudas,calças,meias, com preço e o nome)
2 - Pedir a quantidade desejadas de produtos ao usuário 
3 - mostrar na tela que pagando a vista vai ter 10% de desconto, mas parcelado pode dividir em até 6x o preço integral
4 - Pedir cpf para nota fiscal 
5- mostrar o valor e confirmar a compra com s ou n (s para sim e n para não)
6 - Sair do programa. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Produto {
    char nome[20];
    float preco;
    int estoque;
};

void consultarEstoque(struct Produto produtos[]) {
    printf("Consulta de Estoque:\n");
    printf("ID | Produto       | Preco | Estoque\n");
    for (int i = 0; i < 5; i++) {
        printf("%d  | %s | %.2f  | %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].estoque);
    }
}

void realizarPedido(struct Produto produtos[]) {
    int id, quantidade;
    printf("Digite o ID do produto que deseja comprar (1 a 5): ");
    scanf("%d", &id);
    id--; // Ajustando para o índice do array
    if (id < 0 || id >= 5) {
        printf("ID de produto invalido!\n");
        return;
    }
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);
    if (quantidade > produtos[id].estoque) {
        printf("Quantidade indisponivel no estoque!\n");
        return;
    }
    printf("Pedido realizado com sucesso!\n");
    produtos[id].estoque -= quantidade;
}

void calcularPagamento(struct Produto produtos[]) {
    char cpf[12];
    float total = 0;
    printf("Insira o CPF para a nota fiscal: ");
    scanf("%s", cpf);

    for (int i = 0; i < 5; i++) {
        total += produtos[i].preco * produtos[i].estoque;
    }

    printf("Total a pagar: R$%.2f\n", total);
    printf("Deseja pagar a vista (com 10%% de desconto) ou parcelar (em ate 6x)? (V para vista, P para parcelado): ");
    char opcao;
    scanf(" %c", &opcao);
    if (opcao == 'V' || opcao == 'v') {
        total *= 0.9; // Aplica desconto de 10% para pagamento à vista
        printf("Pagamento a vista com desconto de 10%%! Total a pagar: R$%.2f\n", total);
    } else if (opcao == 'P' || opcao == 'p') {
        int parcelas;
        printf("Quantas parcelas deseja (1 a 6)? ");
        scanf("%d", &parcelas);
        if (parcelas < 1 || parcelas > 6) {
            printf("Numero de parcelas invalido!\n");
            return;
        }
        printf("Pagamento parcelado em %d vezes de R$%.2f\n", parcelas, total / parcelas);
    } else {
        printf("Opcao invalida!\n");
        return;
    }
    char confirmacao;
    printf("Confirmar a compra (s/n)? ");
    scanf(" %c", &confirmacao);
    if (confirmacao == 's' || confirmacao == 'S') {
        printf("Compra confirmada! Nota fiscal sera emitida para CPF %s. Obrigado pela compra!\n", cpf);
    } else {
        printf("Compra cancelada.\n");
    }
}

int main() {
    struct Produto produtos[5] = {
        {"Camiseta", 29.99, 50},
        {"Sapato", 79.99, 30},
        {"Bermuda", 39.99, 40},
        {"Calca", 49.99, 35},
        {"Meia", 9.99, 60}
    };

    int escolha;

    do {
        printf("\nMenu:\n");
        printf("1 - Consultar Estoque\n");
        printf("2 - Realizar Pedido\n");
        printf("3 - Calcular Pagamento\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                consultarEstoque(produtos);
                break;
            case 2:
                realizarPedido(produtos);
                break;
            case 3:
                calcularPagamento(produtos);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (escolha != 4);

    return 0;
}

