#include<stdio.h>
void palindrome(int a){
    int rev=0;
    for(int i=a;i>0;i/=10){
        int last=i%10;
        rev=(rev*10)+last;
    }
    if(a==rev){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    palindrome(a);
    return 0;
}