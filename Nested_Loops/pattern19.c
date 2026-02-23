#include <stdio.h>

int main() {
    int i, j;
    int max = 5;  

   
    for(j = 1; j <= 10; j++) {
        printf("* ");
    }
    printf("\n");

   
    for(i = max - 1; i >= 1; i--) {

        
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        
        for(j = 1; j <= (10 - 2*i); j++) {
            printf("  ");
        }

        
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

  
    for(i = 1; i <= max - 1; i++) {

        
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        for(j = 1; j <= (10 - 2*i); j++) {
            printf("  ");
        }

         for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for(j = 1; j <= 10; j++) {
        printf("* ");
    }

    return 0;
}