#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    int i;

    
    scanf("%d", &t);

    
    int *vetor = (int*)malloc(t * sizeof(int));

    
    if (vetor == NULL) {
        printf("[vazio]\n");
        return 1;  
    }

    
    for (i = 0; i < t; i++) {
    
        scanf("%d", &vetor[i]);
    }

    
    for (i = 0; i < t; i++) {
        printf("[%d] ", vetor[i]);
    }

    
    free(vetor);

    return 0;  
}
