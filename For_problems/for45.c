#include<stdio.h>
int main(){
    int totaldata;
    scanf("%d",&totaldata);
    int n;
    scanf("%d",&n);
    int daily;
    int remain=totaldata;
    int count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&daily);
        if(remain>=daily){
            remain=remain-daily;
            count++;
        }
       else{
            remain=remain-daily;
            break;
        }
    }
    printf("Remaining data: %d\n",remain);
    printf("Successful Days: %d",count);
    return 0;
}