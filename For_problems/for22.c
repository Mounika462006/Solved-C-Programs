#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int count=0;
    for(int i=2; i<=n;i++){
        int isprime =1;
        for(int j=2;j<i;j++){
            if(i%j==0){
            isprime =0;
            }
        }
        if(isprime==1){
            count++;
        }
            
    }
    printf("%d",count);
    return 0;
}
