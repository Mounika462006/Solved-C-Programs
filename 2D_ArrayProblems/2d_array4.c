#include<stdio.h>
int main(){
    int row;
    printf("Enter the Row: ");
    scanf("%d",&row);
    int column;
    printf("Enter the Column: ");
    scanf("%d",&column);
    int arr[row][column];
    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int i,j;
    for( i=0;i<row;i++){
        int max=0;
        for(j=0;j<column;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
        printf("Ward %d highest = %d\n",i+1,max);
    } 

    return 0;
}