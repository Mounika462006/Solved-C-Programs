#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",a);

    if((a % 4 ==0 && a % 400 == 0) || (a % 100 != 0) ){
        printf("%d is a Leap Year",a);
    }else{
        printf("%d is not a Leap Year",a);
    }
    return 0;
    
}
