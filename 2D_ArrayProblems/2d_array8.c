#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);

    int column;
    printf("Enter the column: ");
    scanf("%d",&column);

    int arr[row][column];

    for(int i=0; i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max=arr[0][0]*arr[1][0];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            for(int k=i+1; k<row;k++){
                for(int l=0;l<column;l++){
                    int a=arr[i][j]*arr[k][l];
                    if(max<a){
                        max=a;
                    }
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}