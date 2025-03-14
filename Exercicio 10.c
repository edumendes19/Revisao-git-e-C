#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;  
} aluno_t;

aluno_t *aluno_root = NULL;  

void inserir_aluno() {
    aluno_t *novo_aluno = malloc(sizeof(aluno_t)); 
    if (novo_aluno == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", novo_aluno->nome);  
    printf("Digite o numero de faltas: ");
    scanf("%d", &novo_aluno->faltas);
    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    
    novo_aluno->prox = NULL;

    
    if (aluno_root == NULL) {
        aluno_root = novo_aluno;
    } else {
        aluno_t *temp = aluno_root;
        
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        
        temp->prox = novo_aluno;
    }
}

void exibir_alunos() {
    aluno_t *temp = aluno_root;

    if (temp == NULL) {
        printf("Nenhum aluno na lista.\n");
        return;
    }

    while (temp != NULL) {
        printf("\n--- Dados do Aluno ---\n");
        printf("Nome: %s\n", temp->nome);
        printf("Faltas: %d\n", temp->faltas);
        printf("Nota: %.2f\n", temp->nota);

        // Verifica aprovação
        if (temp->nota >= 6.0 && temp->faltas <= 10) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }

        temp = temp->prox;  
    }
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Inserir aluno\n");
        printf("2. Exibir alunos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                inserir_aluno();
                break;
            case 2:
                exibir_alunos();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    
    aluno_t *temp;
    while (aluno_root != NULL) {
        temp = aluno_root;
        aluno_root = aluno_root->prox;
        free(temp);
    }

    return 0;
}