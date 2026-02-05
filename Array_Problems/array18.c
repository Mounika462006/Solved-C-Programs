#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avrg=sum/n;
    for(int j=0;j<n;j++){
        if(avrg<arr[j]){
        count++;
    }
    }
    printf("Count: %d",count);
    return 0;
}