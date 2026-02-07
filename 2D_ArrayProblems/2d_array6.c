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
    int avrg,i;
    int max=0;
    for( i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum=sum+arr[i][j];
        }
        avrg=sum/column;
         if(max<avrg){
            max=avrg;
            printf("Output : %d",i+1);
        }
    }
   
    return 0;
}