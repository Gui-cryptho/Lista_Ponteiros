#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointers.h"

//Aluno: Guilherme de Sousa Brito ra:2576627

/*
typedef struct{
    char nome[20];
    char codigo[20];

}Registro;

void ex7_cadastrar(char *nome, char *codigo){
    Registro dado;
    strcpy(dado.nome, nome);
    strcpy(dado.codigo, codigo);

}

Registro ex7_imprimir(char *codigo){
    Registro dado;

    if(*codigo == dado.codigo)
        return dado.codigo;

    ex7_imprimir(dado.codigo + 1);
}
*/
/*
void preencher_matriz(int **matriz)
{
    if()
}
*/
int main()
{
    //ex1
    /*

     p++;       //Aqui esta sendo increntado o valor da memoria em 4 bytes de p for do tipo int
    (*p)++;    //Aqui esta sendo incrementado o valor referenciado por p
    *(p++);   //Aqui esta sendo feito um incremento do valor referenciado por p
    *(p+10); //Aqui seria a mesma declaracao de p[10] só que criando o indice de p manualmente

    */

    //ex2

    printf("Ex2:\n");
    int y, *p, x;
    y = 0;
    p = &y;                 //p agora aponta para o valor da memoria de y
    x = *p;                  //foi passado o valor referenciado por *p para x (x = 0)
    x = 4;                  //x = 4
    (*p)++;                 //y = 1
    x--;                    //x = 3
    (*p) += x;              //1 = 1 + 3
    printf ("\ny = %d\n", y);//y = 4 & x = 3
    //return(0);
    printf("\n");

    //ex3
    printf("Ex3:\n");
    int x_1, *p_1, **q;
    p_1 = &x_1;
    q = &p_1;
    x_1 = 10;
    printf("\n%d\n", **q);
    //&q acessando o endereco de memoria de q
    //*q acessando o endereco de memoria de *p
    //**p acessando o valor no endereco de memoria que *p aponta
    //return(0);
    printf("\n");

    //ex4
    int ex4_n;
    printf("\nEx4:\n");
    //Aqui por motivos de demonstracao irei deixar ex4_n = 4 mais se voce quiser digitar manualmente o tamanho
    //eh so comentar a variavel ex4_n = 4 e tirar o scanf do comentario e o codigo ira funcionar normalmente
    ex4_n = 4;
    //scanf("%d", &ex4_n);

    int *ex4_alocacao = alocar_vetor(ex4_n);
    printf("\nValor do ponteiro ex4_alocacao inicializado: %p", ex4_alocacao);
    printf("\n");

    //ex5
    printf("\nEx5:\n");
    int vet_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int vet_2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int tam = 10;

    printf("\n");
    printf("O conteudo de vet_1 sera copiado para vet_2 (inversamente):");
    printf("\nMaior numero encontrado em vet_1: %d ",inverter_vetor(vet_1, vet_2, tam - 1));
    printf("\n");

    printf("Impressao de vet_1 para comparacao: ");
    for(int i = 0; i < tam; i++)
        printf("%d ", *(vet_1 + i));

    printf("\n");
    free(ex4_alocacao);

    //ex6
    printf("\nEx6:\n");
    char s[10] = "abcde";
    printf("\ninverter string: %s", s);
    printf("\n");
    inverter_string(s);
    printf("\n\n");

    //ex7
    /*
    printf("\nEx7:\n");
    Registro tv = ex7_cadastrar("Televisao", "TV001)");
    */

    //ex8
    printf("Ex8:\n");
    printf("\n");
    int ex8_tamanho;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &ex8_tamanho);
    int *ex8_vet = alocar_vetor(ex8_tamanho);

    printf("Digite os nuemeros que irao ser colocado no vetor:\n");
    for(int i = 0; i < ex8_tamanho; i++)
    {
        scanf("%d", &ex8_vet[i]);
    }

    ex8_ler(ex8_tamanho,ex8_vet);

    free(ex8_vet);

    //ex9
    int m = 2, n = 2;

    int **ex9_matriz = alocar_matriz(m, n);
    free_matriz(ex9_matriz, m);


    return 0;
}
