#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(num==sum){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}