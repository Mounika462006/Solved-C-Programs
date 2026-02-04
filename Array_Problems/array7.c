#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter X:");
    scanf("%d",&x);

    for(int i=0;i<size;i++){
        if(x==arr[i]){
            count++;
        }
    }
    
    printf("Frequency Count: %d",count);
    return 0;
}