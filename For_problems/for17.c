#include<stdio.h>
int main(){
    int num,sum;
    int fact=1;
    scanf("%d",num);
    for(int i=num; i!=0;i/=10){
        int temp=i%10;
        int fact=fact*temp;
        int sum=sum+fact;
    }
    if(sum=num){
        printf("yes");
    }else{
        printf("NO");
    }
    return 0;
}