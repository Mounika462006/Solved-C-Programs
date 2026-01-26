#include<stdio.h>
int main(){
    int digit;
    scanf("%d",&digit);
    printf("%d\n",digit);
    if(digit>=100 && digit<=999){
        printf("Three-digit number");
    }
    else{
        printf("Not Three-digit number");
    }

    return 0;

}