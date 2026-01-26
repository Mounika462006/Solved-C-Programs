#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    printf("%c\n",a);

    if(a>='a' && a<='z'){
        printf("Lowercase letter");
    }
    else if(a>='A' && a<='Z'){
        printf("Uppercase letter");
    }
    return 0;

}