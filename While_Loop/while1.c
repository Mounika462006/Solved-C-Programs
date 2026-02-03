#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int noise,coun=0,count=0;
    int streak=0,min=0,count1=0;
    int i=1;
    while (i<=n){
        scanf("%d",&noise);
        if(noise>70){
            coun++;
        }

        if(min<noise && noise>70){
            min =noise;
            count++;
            if(count1<count){
                count1=count;
            }
        }else if(min>noise && noise>70){
             count = 1;
             min = noise;

        }else{
            min=0;
            count=0;
        }
        i++;
    }
    printf("Noise Violations: %d\n",coun);
    printf("Longest Violation Streak: %d",count1);

    return 0;
}
