#include<stdio.h>
int main(){
    int num,a,b,c;

    scanf("%d",&num);
    printf("%d units\n",num);

   if(num<=50){
        int a = num*3;
        printf("Bill Amount = %d",a);
   }else if (num>=51 && num<=100){
        int b=num*4;
        printf("Bill Amount = %d",b);
   }else if (num<=100)
   {
        int c=num*5;
        printf("Bill Amount = %d",c);
   }
    return 0;
    
}