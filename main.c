#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int i;

    
    scanf("%d", &tamanho);

    
    if (tamanho == 0) {
        printf("[vazio]\n");
        return 0;
    }

    
    int* vetor = (int*)malloc(tamanho * sizeof(int));

    
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("[");
    for (i = 0; i < tamanho; i++) {
        if (i != 0) {
            printf(",");
        }
        printf("%d", vetor[i]);
    }
    printf("]\n");

    
    free(vetor);

    return 0;
}
