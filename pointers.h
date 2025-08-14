#ifndef POINTERS_H_INCLUDED
#define POINTERS_H_INCLUDED

typedef struct
{
    char nome[20];
    int codigo;

} Registro;

int inverter_vetor(int *vet_1, int *vet_2, int tam);
int *alocar_vetor(int tam);
int *matriz_continua(int linha, int coluna);
void preencher_matriz(int *matriz, int linha, int coluna, int total);
void inverter_string(char *string);
void ex8_ler(int tam, int *ex8_vet);
Registro* criarRegistro(Registro *dados, int tamanho);
void Imprimir_Lista(Registro *lista, int tam);
Registro encontrar_id(int search_codigo, Registro *lista);

#endif // POINTERS_H_INCLUDED
