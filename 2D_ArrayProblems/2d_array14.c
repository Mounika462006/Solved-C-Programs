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
    
    
    int add=0;
    for(int i=0;i<row;i++){
        int count=0;
        int a=0;
        for(int j=0;j<col;j++){
            if(a<=arr[i][j]){
                a=arr[i][j];
                count++;
            }
        }
        if(count==col){
            add++;
        }
    }



    printf("op %d",add);
    return 0;
}