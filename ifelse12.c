#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    printf("%d\n",mark);
    if(mark>=91 && mark<=100){
        printf("Grade A");
    }
    else if(mark>=75 && mark<=90){
        printf("Grade B");
    }else if(mark>=50 && mark<=74){
        printf("Grade C");
    }else{
        printf("Fail");
    }

    return 0;

}