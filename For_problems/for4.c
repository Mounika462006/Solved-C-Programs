#include<stdio.h>
int main(){
    int n;//5
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int mul=i*n;
        printf("%d ",mul);
    }
    return 0;
}