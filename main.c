#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    

    scanf("%d", &t);

    
    int *vetor = (int*)malloc(t * sizeof(int));

    
    if (vetor == NULL) {
        printf("[vazio]\n");
        return 0;  
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
