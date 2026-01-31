#include<stdio.h>
int main(){
    int salary;
    scanf("%d",&salary);
    int absent;
    scanf("%d",&absent);
    int fine =100;
    int a = salary -(absent*100);
    printf("Final Salary : %d",a); 
    return 0;
}