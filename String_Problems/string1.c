#include<stdio.h>

int main(){
    char str[20];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int count=0;
    int i=1;
    while (str[i] !='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
