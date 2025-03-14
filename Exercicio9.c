#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
   
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    
    if (aluno == NULL) {
        printf("Erro na alocação de memoria!\n");
        return 1;
    }

    
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, 100, stdin);  // Lê o nome do aluno

    printf("Digite o numero de faltas: ");
    scanf("%d", &aluno->faltas);  // Lê o número de faltas

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);  // Lê a nota do aluno

   
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

    
    if (aluno->nota >= 6.0 && aluno->faltas <= 10) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    
    free(aluno);

    return 0;
}