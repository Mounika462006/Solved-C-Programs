#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==0){
            count++;
        }else if(a==1){
            
        }
    }
    printf("Longest Failure Streak: %d",count);
}