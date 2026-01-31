#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int unit;
    int sum=0;
    for (int i=n;i>0;i--)
    {
        scanf("%d",&unit);
        sum = sum+unit;
    }
    printf("Total Units : %d",sum);


    return 0;
}