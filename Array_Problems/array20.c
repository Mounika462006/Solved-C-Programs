#include<stdio.h>
int main(){
    int size,k,j;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for( j=0;j<size;j++){ 
        int  count=0;

        for(k=j+1; k<size; k++){     
            if(arr[j]==arr[k]){   
                count++;
            }
        }
        if(count==0){
            printf("%d ",arr[j]);
        }
    }
    
    
    return 0;
}