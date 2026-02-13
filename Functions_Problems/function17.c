#include<stdio.h>
void armstrong(int num){
    int cube=0;
    for(int i=num;i>0;i/=10){
        int last=i%10;
        cube=cube+(last*last*last);
    }
    if(cube==num){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
}

int main(){
    int num;
    scanf("%d",&num);
    armstrong(num);
    return 0;
}