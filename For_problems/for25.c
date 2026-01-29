#include<stdio.h>
int main(){
    int n,cube;
    scanf("%d",&n);
    int sum=0;
    for (int i=n; i!=0; i/=10){
        int temp=i%10;
        cube=temp*temp*temp;
        sum=sum+cube;
    }

    if(sum==n){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}