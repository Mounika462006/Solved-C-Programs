#include<stdio.h>
int reverse(int a){
    int repeat=0;
    for(int i=a;i>0;i/=10){
        int digit=i%10;
        repeat=(repeat*10)+digit;
    }
    return repeat;
}
int main(){
    int a;
    scanf("%d",&a);
    int rev=reverse(a);
    printf("%d",rev);

    return 0;
}