#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int length=0;
    int i=0;
    while (str[i]!=0){
        length++;
        i++;
    }
    
    for(int i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
}