#include<stdio.h>
int main(){
    int revenue;
    scanf("%d",&revenue);
    int days,sum=0,count=0;
    for(int i=1; i<=revenue;i++){
        scanf("%d",&days);
        sum=sum+days;
        if(days>50000){
            count++;
        }
    }
    printf("Total Revenue : %d\n",sum);
    printf("Target days: %d",count);
    return 0;
}