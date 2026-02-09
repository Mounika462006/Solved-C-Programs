#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int col;
    printf("Enter the column: ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    
    for(int i=0;i<row-1;i++){
        
        for(int j=0;j<col-1;j++){
        int sum=0;
        sum=sum+arr[i][j] + arr[i][j+1]+arr[i+1] [j] + arr[i+1] [j+1];
            if(max<sum){
                max=sum;
            }
        
        }
    }
    printf("%d",max);
    return 0;
}