#include <stdio.h>

int main() {
    int n = 4;
    int i, j;

   
    for(i = 1; i <= n; i++) {
        
        
        for(j = 1; j <= i; j++) {
            printf("*");
        }

       
        for(j = 1; j <= 2*(n - i) + 2; j++) {
            printf(" ");
        }

      
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

  
    for(i = 1; i <= 2*(n + 1); i++) {
        printf("*");
    }
    printf("\n");

    
    for(i = n; i >= 1; i--) {
     
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        for(j = 1; j <= 2*(n - i) + 2; j++) {
            printf(" ");
        }

        
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}