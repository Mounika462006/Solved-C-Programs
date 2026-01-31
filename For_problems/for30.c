#include<stdio.h>
int main(){
    int percentage;
    scanf("%d",&percentage);
    int hour;
    scanf("%d",&hour);
    int dry,sum=0;
    for(int i=1;i<=hour;i++){
        scanf("%d",&dry);
        sum=sum+dry;
    }
    int remain = percentage-sum;
    printf("Remaining Battery: %d %",remain);
    return 0;
}