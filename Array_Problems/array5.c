#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    int count=0;
    int avrg;
    for( int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    avrg= sum/size;

    for(int j=0;j<size;j++){
        if(avrg<arr[j]){
            count++;
        }
    }
    printf("Days with above average salaries:  %d",count);
    return 0;
}