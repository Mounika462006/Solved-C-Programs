#include<stdio.h>
int main(){
    int loss;
    scanf("%d",&loss);
    int high,sum=0,count=0;
    for(int i=1; i<=loss;i++){
        scanf("%d",&high);
        sum=sum+high;
        if(high>100){
            count++;
        }
    }
    printf("Total Loss :%d\n",sum);
    printf("High Loss Days: %d",count);
    return 0;
}