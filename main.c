#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    int i;
    
    
    scanf("%d", &t);


    if (t == 0) {
        printf("[vazio]\n");
        return 0;  
    }

    
    int *vetor = (int*)malloc(t * sizeof(int));

    
    if (vetor == NULL) {
        printf("[vazio]\n");
        return 0;  
    }

    
    for (i = 0; i < t; i++) {
        scanf("%d", &vetor[i]);  
    }

    
    printf("[");
    for ( i = 0; i < t; i++) {
        printf("%d", vetor[i]);  
        if (i < t - 1) {
            printf(",");  
        }
    }
    printf("]\n");  

    
    free(vetor);

    return 0;  
}
