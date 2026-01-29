#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n); //1234
    for(int i=n;i>0;i/=10){

        int temp=i%10;
        if(temp%2==0){
           count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}