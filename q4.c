#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 6;
    }
    else {
        bill = (100 * 5) + (100 * 6) + (units - 200) * 8;
    }

    if (bill > 1000) {
        bill += bill * 0.10;
    }

    printf("Total bill: %.2f", bill);

    return 0;
}
