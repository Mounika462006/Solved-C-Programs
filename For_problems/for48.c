#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int unit,sum=0,count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&unit);
        sum=sum+unit;
        if(unit>5){
            count++;
        }
    }
    printf("Total Units: %d\n",sum);
    printf("Spike Hours: %d",count);
    return 0;
}