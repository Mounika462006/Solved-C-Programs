#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int heart,count=0;
    int a=1;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&heart);
        if(heart>a){
            a=heart;
        }
        if(heart>140){
            count++;
        }
    }
   
    printf("Max Heart Rate: %d\n",a);
    printf("Danger Readings: %d",count);

    return 0;
}