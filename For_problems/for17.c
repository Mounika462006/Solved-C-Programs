#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int i=num; i!=0;i/=10){
        int temp=i%10;
        int fact=1;
        for(int j=temp;j>0;j--){
            fact=fact*j;        
        }
        sum=sum+fact;
        
    }
    if(sum==num){
        printf("yes");
    }else{
        printf("NO");
    }
    return 0;
}