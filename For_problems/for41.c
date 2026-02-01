#include<stdio.h>
int main(){
    int initial;
    scanf("%d",&initial);
    int n;
    scanf("%d",&n);
    int withdraw,sum=0,count=0;
    int risk=initial;
    for(int i=1;i<=n;i++){
        scanf("%d",&withdraw);
        sum=sum+withdraw;
        risk =risk-withdraw;
        if(risk<5000){
            count++;
        }
    }
    int remain =initial-sum;
    printf("Remaining Cash: %d\n",remain);
    printf("Risk Count: %d",count);

    return 0;
}