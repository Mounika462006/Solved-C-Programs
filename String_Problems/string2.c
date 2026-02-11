#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    
    int i=1;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
            count++;
        }
        i++;
    }
    if(count>=1){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}