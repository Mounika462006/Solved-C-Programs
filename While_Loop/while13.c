#include<stdio.h>
int main(){
    int total;
    scanf("%d",&total);

    int n;
    scanf("%d",&n);

    int a, sum=total,count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a<=total && sum>0){
            sum=sum-a;
            count++;
        }
    }
    printf("Days Used: %d\n",count);
    printf("Remaining Data: %dGB",sum);
    return 0;
}