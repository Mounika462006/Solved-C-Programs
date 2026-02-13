#include<stdio.h>
void menu(int a,int b,char exp){
    switch (exp)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        printf("Invalid input");
        break;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char exp;
    printf("Enter the Expression: ");
    scanf(" %c",&exp);
    menu(a,b,exp);
    return 0;
}