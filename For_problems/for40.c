#include<stdio.h>
int main(){
    int voltage;
    scanf("%d",&voltage);
    int low;
    scanf("%d",&low);
    int a=low;
    int count=0;
    for(int i=2;i<=voltage;i++){
        scanf("%d",&low);
        if(low<a){
            a=low;
        }
        if(low<210){
            count++;
        }
    }
    printf("Minimum Voltage: %d\n",a);
    printf("Low Voltage Events: %d",count);
    return 0;
}