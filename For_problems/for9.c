#include<stdio.h>
int main(){
    int n;
    int rev=0;
    int count=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        int temp=n%10;
         int rev =(rev*10)+temp;
         count=count+1;
    }
    printf("%d",count);
    return 0;
}