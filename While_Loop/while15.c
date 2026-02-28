#include <stdio.h>

int main() {
    int balance, N;
    scanf("%d", &balance);
    scanf("%d", &N);

    int changes[N];
    int i = 0;

    while(i < N) {
        scanf("%d", &changes[i]);
        i++;
    }

    int negativeCount = 0;
    i = 0;

    while(i < N) {
        balance += changes[i];

        if(balance < 0) {
            negativeCount++;
        }

        i++;
    }

    printf("Final Balance: %d\n", balance);
    printf("Negative Count: %d\n", negativeCount);

    return 0;
}