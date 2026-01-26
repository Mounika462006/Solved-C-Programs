#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);
    if(a<b){
        printf("%d is greater.",b);
    }else{
        printf("%d is greater.",a);
    }
    return 0;
    
}