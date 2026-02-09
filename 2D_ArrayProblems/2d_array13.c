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
    int index=0;
    int minmul=0;
    for(int i=0;i<row;i++){
        int mul=1;
        for(int j=0;j<col;j++){
            mul=mul*arr[i][j];
        }
        if(mul>minmul){
            minmul=mul;
            index =i;
        }
    }
    printf("%d",index);
    return 0;
}