#include<stdio.h>
void fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int res=a+b;
        a=b;
        b=res;
        
    }
}

int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}