#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int range;
    scanf("%d",&range);
    int product=1;
    if(range==0){
        printf("1");
    }else{
        for(int i=1;i<=range;i++){
        product = product*num;// 
    }
    printf("%d",product);
    }
    
    return 0;
}