#include <stdio.h>

int main() {
    int input, booked = 0, empty = 0;

    for (int i = 1; i <= 40; i++) {
        scanf("%d", &input);

        if (input == 1)
            booked++;
        else
            empty++;

        if (booked == 40)
            break;
    }

    printf("Booked: %d\n", booked);
    printf("Empty: %d", empty);

    return 0;
}
