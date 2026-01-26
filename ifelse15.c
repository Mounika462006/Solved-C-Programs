#include<stdio.h>
int main(){
    int t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    int sum= t1+t2+t3;
    printf("%d %d %d\n",t1,t2,t3);
    
    if(sum==180){
        printf("Valid triangle");
    }else{
        printf("Not valid triangle");
    }
    return 0;
    
}