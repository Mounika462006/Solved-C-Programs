#include<stdio.h>
int main(){
    int data;
    scanf("%d",&data);
    int high,sum=0,count=0;
    for(int i=1;i<=data;i++){
        scanf("%d",&high);
        sum=sum+high;
        if(high>2){
            count++;
        }
    }
    printf("Total Data : %d\n",sum);
    printf("High Usage Days : %d",count);
    return 0;
}