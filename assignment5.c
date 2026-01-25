#include<stdio.h>
int main(){
    int a =30,b=2;
    printf("%d %d\n",a,b);
    printf("%d ",a/=b);
    printf("%d",a%=b);
    return 0;
}