#include<stdio.h>
#include<stdlib.h>

    
    int main()
    {
     int *vetor;
     int t;
     
       scanf("%d",&t);
       
       vetor = (int *)malloc(t*sizeof(int));
       
        for( int i = 0; i < t; i++){
         scanf("%d", &vetor[i]);
       }
       if(t == 0){
           printf("[vazio]");
       }else{
       	
	       printf("[");
	       for( int i = 0; i < t; i++){
	
	           if(i==t-1){
	
	               printf("%d", vetor[i]);
	               
	           }else{
	
	               printf("%d, ", vetor[i]);
	
	           }
	     
	       }
	    
	      printf("]\n");
  		}
      free(vetor);
 
    return 0;
    }
