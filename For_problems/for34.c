#include<stdio.h>
int main(){
    int score,sum=0;
    scanf("%d",&score);
    int subject,count=0;
    for(int i=1;i<=score;i++){
        scanf("%d",&subject);
        sum=sum+subject;
        if(subject<40){
            count++;
        }
    }
    int avg=sum/score;
    printf("Average Score : %d\n",avg);
    printf("Failed Subjects : %d",count);
    return 0;
}