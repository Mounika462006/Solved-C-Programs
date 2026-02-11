#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while (str[i]!='\0'&& str[i] !='\n'){

        if(str[i]>='A' && str[i] <='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }

    printf("%s",str);
    return 0;
}