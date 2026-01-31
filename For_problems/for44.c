#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int noise,count=0;
    int a=1;
    for(int i=1;i<=n;i++){
        scanf("%d",&noise);
        if(noise>a){
            a=noise;
        }if(noise>70){
            count++;
        }
    }
    printf("Maximum Noise: %d\n",a);
    printf("Noisy periods: %d",count);
    return 0;
}