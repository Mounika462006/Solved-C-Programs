#include<stdio.h>
int intrest(int P,int R,int T){
    float a=(P*R*T)/100;
    return a;
}

int main(){
    int P,R,T;
    scanf("%d%d%d",&P,&R,&T);
    float simple=intrest(P,R,T);
    printf("%.2f",simple);
    return 0;
}
