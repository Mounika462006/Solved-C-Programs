#include<stdio.h>
int main(){
    int n,cost=0;
    scanf("%d",&n);
    int hours,sum=0,count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&hours);
        sum=sum+hours;
        cost =cost +(hours*200);
        if(hours>3){
            count++;
        }
    }
    printf("Total obertime Hours: %d\n",sum);
    printf("Overtime Cost: %d\n",cost);
    printf("Heavey overtime days: %d\n",count);
}