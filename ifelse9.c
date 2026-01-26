#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    printf("%d\n",age);
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }

    return 0;

}