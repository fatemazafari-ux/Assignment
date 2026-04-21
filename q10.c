#include <stdio.h>

int main() {
    float price, total = 0;

    while (1) {
        scanf("%f", &price);

        if (price == 0)
            break;

        total += price;
    }

    if (total > 2000)
        total -= total * 0.15;
    else
        total -= total * 0.05;

    printf("Final bill: %.2f", total);

    return 0;
}
