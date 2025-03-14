#include <stdio.h>

int main() {
    float nota, freq;
    
    printf("Nota: ");
    scanf("%f", &nota);
    
    printf("Frequencia: ");
    scanf("%f", &freq);
    
    if (nota >= 7 && freq >= 75)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}