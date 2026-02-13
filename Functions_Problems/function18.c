#include<stdio.h>
int gcd(int a,int b){
    int c;
    for(int i=1;i<=a && i<=b;i++){
        if (a%i==0 && b%i==0)
        {
            c= i;
        }
        
    }
    return c;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int div=gcd(a,b);
    printf("%d",div);
    return 0;
}