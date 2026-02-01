#include<stdio.h>
int main(){
    int capacity;
    scanf("%d",&capacity);
    int n;
    scanf("%d",&n);
    int items,count=0;
    int remain=capacity;
    for(int i=1;i<=n;i++){
        scanf("%d",&items);
        remain=remain-items;
        if(remain<0){
            count++;
        }

    }
    printf("Remaining capacity: %d\n",remain);
    printf("Overflow days: %d",count);
    return 0;          
}