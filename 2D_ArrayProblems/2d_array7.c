#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int column;
    printf("Enter the column: ");
    scanf("%d",&column);
    int arr[row][column];
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int first =arr[0][0];
    for(int i=1;i<row;i++){
        for(int j=0; j<column;j++){
            if(arr[i][j]>first){
                first=arr[i][j];
            }
        }
    }
    int second=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(second<arr[i][j] && arr[i][j]<first){
                second=arr[i][j];
            }
        }
    }
    printf("2) %d",second);
    return 0;

}
