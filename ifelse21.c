#include<stdio.h>
int main(){
    int a,b;

    scanf("%d%d",&a,&b);
    printf("Enter option : \n");
    int val;
    scanf("%d",&val);
    switch (val)
    {
    case 1:
        printf("Result = %d",a+b);
        break;
    case 2:
        printf("Result = %d",a-b);
        break;
    case 3:
        printf("Result = %d",a*b);
        break;
    case 4:
        printf("Result = %d",a/b);
        break;
    
    default:
        printf("invalid input");
        break;
    }
}