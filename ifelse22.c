#include<stdio.h>
int main(){
    int val;
    scanf("%d",&val);
    switch (val)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("invalid input");
        break;
    }
}