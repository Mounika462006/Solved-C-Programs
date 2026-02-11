#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int length=0;
    while (str[length]!='\0' && str[length]!='\n')
    {
       length++;
    }
    int ispalindrome=1;
    int k=0,j=length-1;
    while (k<j)
    {
        if(str[k]!=str[j]){
           ispalindrome=0;
           break;
        }
        k++;
        j--;
    }
    
    if(ispalindrome){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    return 0;
}