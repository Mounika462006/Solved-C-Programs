#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int sum=0;
    int arr[size];
    for(int i=0; i<size-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int exp=size*(size+1)/2;
    int total=exp-sum;
    printf("%d",total);
    return 0;
}