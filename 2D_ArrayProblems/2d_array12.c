#include<stdio.h>
#include<stdlib.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int col;
    printf("Enter the column: ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        for(int k=i+1;k<row;k++){
            int add=0;
            for(int l=0;l<col;l++){
                add=add+arr[k][l];
            
        }
        int diff=abs(sum-add);
        if(max<diff){
            max=diff;
        }    
        
    }

    }
    printf("op: %d",max);
    return 0;
}