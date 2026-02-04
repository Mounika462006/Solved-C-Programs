#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int sum=0,max=0;
    int arr[size];
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Total votes = %d\n",sum);
    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    printf("Highest votes = %d\n",max);
    return 0;
}