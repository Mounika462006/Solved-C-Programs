#include<stdio.h>
int main(){
    char str1[100];
    printf("Enter the  string: ");
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    int i=0;
    while (str1[i]!='\0'&& str1[i]!='\n')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);

    return 0;
}
