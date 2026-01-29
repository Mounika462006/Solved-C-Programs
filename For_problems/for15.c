#include<stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){

        if(num%i==0){
        count=count+1;
    }
    }
    printf("%d",count);
    return 0;
}