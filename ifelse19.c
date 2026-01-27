#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    if(a>=0 && a<=9){
        printf("Digit");
    }else{
        printf("Not Digit");
    }
    return 0;

}