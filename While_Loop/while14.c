#include <stdio.h>

int main() {
    int fuel, N;
    int i = 0;
    int consumed;
    int completedTrips = 0;
    scanf("%d", &fuel);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &consumed);

        if (fuel >= consumed) {
            fuel = fuel - consumed;
            completedTrips++;
        } else {
            break; 
        }

        i++;
    }
    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
