#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
     int a=0;
    for(int i=n; i!=0;i/=10){
        int temp=i%10;
        a =a+temp*pow(2,count);
        count++;
    }
    printf("%d",a);
    return 0;
}