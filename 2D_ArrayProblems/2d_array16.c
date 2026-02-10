#include<stdio.h>
int main(){
    int row;
    printf("Enter the row: ");
    scanf("%d",&row);
    int col;
    printf("Enter the column: ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxcount=0;
    int repeat=arr[0][0];
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            int a=arr[i][j];
            int count=0;
            for(int l=0;l<row;l++){
                for(int k=0;k<col;k++){
                    if(a==arr[l][k]){
                        count++;
                    }

                    
                }
            }
            if(count>maxcount){
                maxcount=count;
                repeat=a;
            }
            
        }
    }
    printf("%d",repeat);
    return 0;
}