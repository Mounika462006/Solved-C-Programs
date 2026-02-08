#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int column;
    printf("Enter the column: ");
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int a=arr[i][j];
            for(int k=0; k<row;k++){
                for(int l=(k==i ? j+1 : 0);l<column;l++){
                    if(a==arr[k][l]){
                        printf("%d",a);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}