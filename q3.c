#include <stdio.h>

int main() {
    int age, day;
    int price;

    scanf("%d %d", &age, &day);

    if (age < 10) {
        price = 60;
    } else {
        if (age <= 25) {
            if (day == 0)
                price = 100;
            else
                price = 120;
        } else {
            if (day == 0)
                price = 140;
            else
                price = 160;
        }
    }

    printf("Ticket price: %d", price);

    return 0;
}
