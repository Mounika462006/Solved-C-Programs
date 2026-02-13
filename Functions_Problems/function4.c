#include<stdio.h>
float circle(int a){
    float pi=3.14;
    float res=3.14*a*a;
    return res;
}
int main(){
    int a;
    scanf("%d",&a);
    float area=circle(a);
    printf("%.2f",area);
    return 0;
}