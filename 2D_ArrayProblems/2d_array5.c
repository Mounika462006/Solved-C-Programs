#include<stdio.h>
int main(){
    int row;
    printf("Enter the Row: ");
    scanf("%d",&row);
    int column;
    printf("Enter the column: ");
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0; j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>200){
                count++;
            }
        }
    }
    printf("Bright Pixels: %d",count);
    return 0;
}