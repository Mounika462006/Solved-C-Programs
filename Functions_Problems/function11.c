#include<stdio.h>
int counts(int num){
    int count=0;
    for(int i=num;i>0;i/=10){
        count++;
    }
    return count;
}

int main(){
    int num;
    scanf("%d",&num);
    int digit=counts(num);
    printf("%d",digit);
    return 0;
}