#include<stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    printf("%d\n",a);

    if(a>=48  && a<=57){
        printf("Digit");
    }else if(a >= 65 && a<=90){
        printf("Alphabet - Uppercase");
    }else if(a>=97 && a<=122){
         printf("Alphabet - Lowercase");
    }else if(a>=33 && a<=47){
        printf("Special Characters");
    }
    return 0;
}