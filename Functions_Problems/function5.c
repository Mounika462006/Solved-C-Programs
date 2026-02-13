#include<stdio.h>
int add(int a){
    int sum=0;
    for(int i=a;i>0;i/=10){
        int digit=i%10;
        sum=sum+digit;
    }
    return sum;
}

int main(){
    int a;
    scanf("%d",&a);
    int s=add(a);
    printf("%d",s);
    return 0;
}