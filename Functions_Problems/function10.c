#include<stdio.h>
int natural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=natural(n);
    printf("%d",sum);

    return 0;
}