#include<stdio.h>
int main(){
    int patients;
    scanf("%d",&patients);
    int overcrowd,sum=0,count=0;
    for (int i = 1; i <=patients; i++)
    {
        scanf("%d",&overcrowd);
        sum=sum+overcrowd;
        if(overcrowd>100){
            count++;
        }
    }
    printf("Total Patients:%d\n",sum);
    printf("Overcrowded Days:%d",count);
    return 0;
}