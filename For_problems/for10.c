#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
//5 
    int a=0;
    int b=1;

    for(int i=0; i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}