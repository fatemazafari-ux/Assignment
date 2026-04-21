#include <stdio.h>

int main() {
    int total, attended;
    float percentage;

    scanf("%d %d", &total, &attended);

    percentage = (attended * 100.0) / total;

    if (percentage >= 75) {
        printf("Allowed to sit in exam\n");
    } else {
        printf("Not allowed\n");

        int needed = (0.75 * total) - attended;
        if ((0.75 * total) > (int)(0.75 * total)) {
            needed++;  // round up
        }

        printf("Needed %d more classes", needed);
    }

    return 0;
}
