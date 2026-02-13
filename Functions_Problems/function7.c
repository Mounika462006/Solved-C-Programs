#include<stdio.h>
void prime(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    prime(a);
    return 0;
}