#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=0;
    int maxmonth=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxmonth=i;
        }
    }
    printf("Highest sales in month %d",maxmonth+1);
    return 0;
}