#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    
    int i;
    for(i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
        if(max<=arr[i]){
            max=arr[i];
            printf("Yes");
        }else{
            printf("No");
        }
    
    return 0;
}