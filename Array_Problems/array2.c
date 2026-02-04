#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>100){
            count++;
        }
    }
    printf("House with consumption above 100 units : %d",count);
    return 0;
}