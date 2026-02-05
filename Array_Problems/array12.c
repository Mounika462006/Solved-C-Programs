#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0,add=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            count++;
        }
        else{
            add++;
        }
    }
    printf("Even: %d\n",count);
    printf("Odd: %d",add);

    return 0;
}