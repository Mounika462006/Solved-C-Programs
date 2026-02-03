#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int count=0;
    while (i<=n)
    {
        if(i%2==0){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
    
}