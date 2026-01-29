#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int sum=0;
    for(int i=1; i<=num;i++){
        a=i*i; 
        sum=sum+a;
    }
   printf("%d",sum);
   return 0;
}