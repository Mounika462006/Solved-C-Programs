#include<stdio.h>
void num(int a){
    if(a % 2 ==0){
        printf("Even");
    }else{
        printf("Odd");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    num(a);
    return 0;
}