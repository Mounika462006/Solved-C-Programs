#include<stdio.h>
int power(int num,int pow){
    int mul=1;
    for(int i=1;i<=pow;i++){
        mul=mul*num;
    }
    return mul;
}

int main(){
    int num;
    scanf("%d",&num);
    int pow;
    scanf("%d",&pow);
    int a=power(num,pow);
    printf("%d",a);
    return 0;
}