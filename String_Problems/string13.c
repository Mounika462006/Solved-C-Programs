#include<stdio.h>
int main(){
     char str[100];
    printf("Enter the  string: ");
    fgets(str,sizeof(str),stdin);
    char target;
    printf("Enter the target: ");
    scanf("%c",&target);

    int count=-1;
    int i=0;
    while (str[i]!='\n' && str[i]!='\0'){
        if(str[i]==target){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}