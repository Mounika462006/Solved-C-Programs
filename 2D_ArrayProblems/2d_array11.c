#include<stdio.h>
int main() {
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
        int count=0;
        int add=0;
        for(int j=0;j<column;j++){
            if(arr[i][j]%2==0){
                count++;
            }else{
                add++;
            }
        }
        if(count== add){
            printf("%d\n",i+1);
        }
        
    }
    
    return 0;
}