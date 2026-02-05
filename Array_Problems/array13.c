#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int position;
    printf("Enter the Position:");
    scanf("%d",&position);
    while (position>0)
    {
        int temp=arr[0];
        for(int j=0;j<size;j++){
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
        position --;
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    
    

    return 0;
}