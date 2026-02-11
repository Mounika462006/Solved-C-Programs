#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the  string: ");
    fgets(str,sizeof(str),stdin);
    int count=1;
    int i=0;
    while(str[i]!='\0'&& str[i]!='\n'){
        if(str[i]==' '){
            count++;
        }

        i++;
    }
    printf("%d",count);
    return 0;
}
