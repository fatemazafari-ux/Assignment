#include <stdio.h>

int main() {
    int battery, charger;

    scanf("%d %d", &battery, &charger);

    if (battery < 20 && charger == 0) {
        printf("Connect charger immediately");
    }
    else if (battery >= 20 && battery <= 80) {
        printf("Battery level normal");
    }
    else if (battery > 80 && charger == 1) {
        printf("Unplug charger to save battery health");
    }

    return 0;
}
