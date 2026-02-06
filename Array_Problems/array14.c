#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);   
    }
    int a=arr[size-1];
    

    for(int j=size-1;j>=0;j--){
        if(a<=arr[j]){
            a=arr[j];
            printf(" %d ",a);
        }
        
    }
    
   

    return 0;
}
