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
    int index=0;
    int i;
    for(int j=0;j<col;j++){
        int sum=0;
        for(i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
        if(max<sum){
            max=sum;
            index=j;
        }

    }
    printf("%d",index);
    return 0;
}