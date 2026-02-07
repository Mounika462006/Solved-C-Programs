#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int column;
    printf("Enter the Column: ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the array value:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
             sum=sum+arr[i][j];

        }
        printf("%d stduent mark : %d ",i+1,sum);
        printf("\n");
    }
    

    return 0;
}
