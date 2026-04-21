#include <stdio.h>

int main() {
    int num, digit, sum = 0, odd = 0;

    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;

        if (digit % 2 != 0)
            odd++;

        num /= 10;
    }

    printf("Sum: %d\n", sum);
    printf("Odd digits: %d", odd);

    return 0;
}
