#include<stdio.h>
int main(){
    int t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    printf("%d %d %d\n",t1,t2,t3);
    
    if((t1==t2) && (t1==t3)){
        printf("Equilateral triangle");
    }else{
        printf("Not Equilateral triangle");
    }
    return 0;
    
}