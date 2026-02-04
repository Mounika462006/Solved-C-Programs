#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    for(int i=1;i<n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int second = -1;  
    i = 0;
    while (i < n) {
        if (arr[i] < max && arr[i] > second) {
            second = arr[i];
        }
        i++;
    }

    printf("Largest: %d\n", max);
    printf("Second Largest: %d\n", second);

    return 0;
}
