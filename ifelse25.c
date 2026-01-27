#include<stdio.h>
int main(){
    printf("Enter option : \n");
    int val;
    scanf("%d",&val);
    int a,b;

    scanf("%d%d",&a,&b);
    
    switch (val)
    {
    case 1:
        printf("Result = %d",a+b);
        break;
    case 2:
        printf("Result = %d",a-b);
        break;
    case 3:
        printf("Result = %d",a*b);switch1.c
        break;
    case 4:
        printf("Result = %d",a/b);
        break;
    
    default:
        printf("invalid input");
        break;
    }
}