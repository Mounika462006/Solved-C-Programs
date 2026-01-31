#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int heavy,sum=0;
    int count=0;
    for(int i=1; i<=days;i++){
        scanf("%d",&heavy);
        sum=sum+heavy;
        if(heavy>=50){
            count++;
        }
    }
    printf("Total Rainfall: %d\n",sum);
    printf("Heavy Rain Days :%d",count);
    return 0;
}