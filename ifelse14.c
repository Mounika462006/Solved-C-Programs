#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    if(a%11==0){
        printf("Divisible by 11");
    }else{
        printf("Not Divisible by 11");
    }
    return 0;
    
}