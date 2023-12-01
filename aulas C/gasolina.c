#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char data[12];
    char combustivel[10];
    char qualidade[10];
    float quantidade;
    float preco;
} sAbastecimento;

void adicionar_prod(sAbastecimento *abastecimento, int ultimo_valor);
void id(sAbastecimento abastecimentos[]);
void achaAbastecimentos(sAbastecimento abastecimentos[]);
void achaId(sAbastecimento abastecimentos[]);

int main(){

    int crud;
    sAbastecimento gasolina[100];

    printf("Menu CRUD - Create, Read, Update, Delete:\n");
    printf("1 - Adicionar\n");
    printf("2 - Consultar\n");
    printf("3 - Editar\n");
    printf("4 - Excluir\n");
    printf("5 - Listar\n");
    printf("0 - Sair\n");
    scanf("%d",&crud);

    if (crud == 1){
        adicionar_prod(achaAbastecimentos(gasolina), achaId(gasolina));
    }
    
return 0;
}

void adicionar_prod(sAbastecimento *abastecimento, int ultimo_valor){
    abastecimento->codigo = ultimo_valor+1;
    printf("Insira a data da compra: ");
    scanf("%s\n", abastecimento->data);
    printf("Insira o tipo do combustivel: ");
    scanf("%s\n", abastecimento->combustivel);
    printf("Insira a qualidade do combustivel: ");
    scanf("%s\n", abastecimento->qualidade);
    printf("Insira a quantidade: ");
    scanf("%f\n", abastecimento->quantidade);
    printf("Insira o preço unitario: ");
    scanf("%f\n", abastecimento->preco);
}

void id(sAbastecimento abastecimentos[]){
    for (int i = 0;i < 100;i++){
        abastecimentos[i].codigo = 0;
    }
}

void achaAbastecimentos(sAbastecimento abastecimentos[]){
    for (int i = 0;i < 100;i++){
        if(abastecimentos[i].codigo == 0) return &abastecimentos[i];
    }
}

void achaId(sAbastecimento abastecimentos[]){
    int ultimo_valor = abastecimentos[0].codigo;
    for (int i = 0;i < 100;i++){
        if(abastecimentos[i].codigo > ultimo_valor) ultimo_valor = abastecimentos[i].codigo;
    }   
}