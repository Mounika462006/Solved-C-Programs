#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);

    int range;
    scanf("%d",&range);
    int sum=0;

    for(int i=1; num*i<=range; i++){
        a= num*i; 
        sum=sum+a; 
    }
    printf("%d",sum);
    return 0;

}