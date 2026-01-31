#include<stdio.h>
int main(){
    int price;
    scanf("%d",&price);
    int days;
    int a=1;
    int count=0;
    for(int i=1;i<=price;i++){
        scanf("%d",&days);
        if(days>a){
           a=days;
        }if(a>100){
            count++;
        }
        
    }
    printf("Highest Price : %d\n",a);
    printf("High Price days %d",count);

    return 0;
}