#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(n>0){
        int dig=n%10;
        rev=(rev*10)+dig;
        n=n/10;
    }
    if(temp==rev){
        printf("%d is a Palindrome",temp);
    }else{
        printf("%d is  not a Palindrome",temp);
    }
    return 0;
}