#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    int *vetor;

    
    scanf("%d", &t);

    if (t <= 0) {
        printf("[vazio]\n");
        return 0;
    }

    
    vetor = (int *)malloc(t * sizeof(int));
    if (vetor == NULL) {
        return 1;
    }

    
    for (int i = 0; i < t; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("[");
    for (int i = 0; i < t; i++) {
        printf("%d", vetor[i]);
        if (i < t - 1) {
            printf(",");
        }
    }
    printf("]\n");

    
    free(vetor);

    return 0;
}
