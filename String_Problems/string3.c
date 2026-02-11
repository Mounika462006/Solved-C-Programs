#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] !='\0' && str[i] !='@'){
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
}