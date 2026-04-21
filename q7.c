#include <stdio.h>

int main() {
    int pin;

    for (int i = 1; i <= 3; i++) {
        scanf("%d", &pin);

        if (pin == 5555) {
            printf("Access Granted");
            return 0;
        }
    }

    printf("Account Locked");

    return 0;
}
