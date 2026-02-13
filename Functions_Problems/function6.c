#include<stdio.h>
int fact(int a){
    int fact=1;
    for(int i=a;i>0;i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a;
    scanf("%d",&a);
    int f=fact(a);
    printf("%d",f);
    return 0;
}