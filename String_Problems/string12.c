#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the  string: ");
    fgets(str,sizeof(str),stdin);
    int count=0;
    int i=0;
    while(str[i]!='\0' && str[i]!='\n'){
        if(!((str[i] >='a' && str[i] <='z') || (str[i]>='A'&& str[i]<='Z') || (str[i]>='0' && str[i]<='9')|| (str[i]==' '))){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}