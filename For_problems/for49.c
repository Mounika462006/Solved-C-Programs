#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int calls,sum=0,count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&calls);
        sum=sum+calls;
        if(calls>40){
            count++;
        }
    }
    printf("Total Calls: %d\n",sum);
    printf("Overloaded Hours:%d",count);

    return 0;
}