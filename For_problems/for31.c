#include<stdio.h>
int main(){
    int passenger;
    scanf("%d",&passenger);
    int ticket;
    int sum=0;
    for (int i = 1; i <=passenger; i++)
    {
        scanf("%d",&ticket);
        sum=sum+ticket;
        
    }
    printf("Total Collection: %d",sum);
    

    return 0;
}