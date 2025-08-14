#ifndef POINTERS_H_INCLUDED
#define POINTERS_H_INCLUDED

int inverter_vetor(int *vet_1, int *vet_2, int tam);
int* alocar_vetor(int tam);
int **alocar_matriz(int linha,int coluna);
void free_matriz(int **mat,int m);
void inverter_string(char *string);
void ex8_ler(int tam, int *ex8_vet);

#endif // POINTERS_H_INCLUDED
