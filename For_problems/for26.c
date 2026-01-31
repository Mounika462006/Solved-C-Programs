#include<stdio.h>
int main(){
int n,val;
int sum=0;
int count=0;
scanf("%d",&n);
for(int i=n;i>0;i--){
    scanf("%d",&val);
    sum=sum+val;
    if(val>=1000){
        count++;
    }
}
printf("Total Expense : %d\n",sum);
printf("Overspend Days :%d",count);
    return 0;
}