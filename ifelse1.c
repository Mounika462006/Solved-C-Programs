#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    if(a>0){
        printf("Positive number");
    }else if (a<0)
    {
      printf("Negative Number");
    }else{
        printf("Zero");
    }
    return 0;
    
}