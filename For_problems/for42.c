#include<stdio.h>
int main(){
    int delay;
    scanf("%d",&delay);
    int delivery;
    int sum=0,count=0;;
    for (int i = 1; i <=delay; i++)
    {
        scanf("%d",&delivery);
        sum=sum+delivery;
        if(delivery>=30){
            count++;
        }
    }
    
    printf("Total Delay: %d\n",sum);
    printf("Delayed Deliveries: %d",count);
    return 0;
}