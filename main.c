#include<stdio.h>
    
    int main()
    {
     int *vetor;
     int t;
     
       scanf("%d",&t);
       
       vetor = (int *)malloc(t*sizeof(int));
       
       if(t == 0){
       printf("[vazio]\n");
       }
       
       
       
       for( int i = 0; i < t; i++){
         scanf("%d", &vetor[i]);
       }
       
       printf("[");
       for( int i = 0; i < t; i++){
       printf("%d", vetor[i]);
       if(i < t - 1){
       printf(",");
       }
       }
    
      printf("]\n");
      
      free(vetor);
    
    
    
    
    return 0;
    }