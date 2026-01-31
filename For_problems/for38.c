#include<stdio.h>
int main(){
    int error;
    scanf("%d",&error);
    int hours,sum=0,count=0;
    for(int i=1;i<=error;i++){
        scanf("%d",&hours);
        sum=sum+hours;
        if(hours>50){
            count++;
        }
    }
    printf("Total Errors: %d\n",sum);
    printf("Critical Hours: %d",count);
    return 0;
}