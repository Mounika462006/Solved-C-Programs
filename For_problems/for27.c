#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int withdrawals;
    for(int i=n;i>0;i--){
        scanf("%d",&withdrawals);
        sum=sum+withdrawals;
    }if(sum<=10000){
            printf("Approved");
        }else{
            printf("Limit Exceeded");
        }

    return 0;
}