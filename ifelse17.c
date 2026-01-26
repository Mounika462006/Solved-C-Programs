#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",num);
    if(num>=10 && num<=20){
        printf("Number with in a Range");
    }else if(num>=30 && num<=40){
        printf("Number with in a Range");
    }
    else{
        printf("Number not with in a range");
    }
    return 0;
    
}