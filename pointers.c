#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

int inverter_vetor(int *vet_1, int *vet_2, int tam)
{
    if(tam < 0)
        return 0;
    else
    {
        //sobrescrevendo o conteudo de vet_2 por vet_1 do maior para o menor
        *vet_2 = *(vet_1 + tam);// vet[tam];
        printf("%d ", *vet_2);
        //aqui esta decrementando o indice de vet_1 e avancando a posicao na memoria de vet_2
        int maior = inverter_vetor(vet_1, vet_2 + 1, tam - 1);
        //vai comparar os valores retornado por maior e aos valores refrenciados por *vet_2 e vai ser encontrado o maior valor
        return (*vet_2 > maior) ? *vet_2 : maior;
    }
}

int* alocar_vetor(int tam)
{
    int *aux = (int*) malloc(sizeof(int) * tam);
    if(aux == NULL)
        printf("Erro na Alocacao");
    return aux;
}

int *matriz_continua(int linha, int coluna)
{
    int *aux_1 = (int*)malloc(linha * coluna * sizeof(int));
    if(!aux_1)
    {
        printf("Erro na alocacao");
        return 0;
    }

    return aux_1;
}

void preencher_matriz(int *matriz, int linha, int coluna, int total)
{
    if(total == 0)
        return;
    else
    {
        *matriz = rand() % 10;
        printf("%2d ", *matriz);

        if(total % coluna == 1)
            printf("\n");

        preencher_matriz(matriz + 1, linha, coluna, total - 1);

    }
}

void inverter_string(char *string)
{
    if(*string == '\0')
        return;
    else
    {
        //na volta da recurssao vai ser impresso os valores percorridos em *string
        inverter_string(string + 1);
        return printf("%c", *string);
    }
}

void ex8_ler(int tam, int *ex8_vet)
{
    if(tam == 0)
        return;
    else
    {
        ex8_ler(tam - 1, ex8_vet);
        return  printf("%d ", ex8_vet[tam -1]);
    }
}

Registro *criarRegistro(Registro *dados, int tamanho) {
    Registro *aux = (Registro*)malloc(sizeof(Registro) * tamanho);
    if (!aux) {
        printf("Erro na alocacao\n");
        return NULL;
    }

    for (int i = 0; i < tamanho; i++) {
        strcpy(aux[i].nome, dados[i].nome);
        aux[i].codigo = dados[i].codigo;
    }

    return aux;
}

void Imprimir_Lista(Registro *lista, int tam){
    if(tam == 0)
        return;
    else{

        Imprimir_Lista(lista, tam - 1);
        printf("Produto:%10s Codigo:%2d\n", lista[tam - 1].nome, lista[tam - 1].codigo);
    }

}

Registro encontrar_id(int search_codigo, Registro *lista){
    if(search_codigo == lista->codigo)
         printf("Produto:%10s Codigo:%2d\n", lista->nome, lista->codigo);
    else
        encontrar_id(search_codigo, lista + 1);
}
