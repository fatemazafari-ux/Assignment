#include <stdio.h>

int main() {
    float hours, total = 0;
    int below2 = 0;

    for (int i = 1; i <= 7; i++) {
        scanf("%f", &hours);
        total += hours;

        if (hours < 2)
            below2++;
    }

    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", total / 7);
    printf("Days below 2 hours: %d", below2);

    return 0;
}
