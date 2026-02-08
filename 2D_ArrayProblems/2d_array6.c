#include<stdio.h>
int main(){
    int row,column;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the column: ");
    scanf("%d",&column);

    int arr[row][column];

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int minsum=0;
    int minindex=0;

    for(int j=0;j<column;j++){
        minsum=minsum+arr[0][j];
    }

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0; j<column;j++){
            sum=sum+arr[i][j];
        }
        if(sum<minsum){
            minsum=sum;
            minindex=i;
        }
    }
    printf("%d",minindex);
    return 0;
}
