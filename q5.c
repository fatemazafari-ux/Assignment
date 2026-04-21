#include <stdio.h>

int main() {
    int type, pass;

    scanf("%d %d", &type, &pass);

    if (type == 1) {
        if (pass == 1234)
            printf("Welcome Admin Panel");
        else
            printf("Invalid password");
    }
    else if (type == 2) {
        if (pass == 2222)
            printf("Welcome Teacher Panel");
        else
            printf("Invalid password");
    }
    else if (type == 3) {
        if (pass == 3333)
            printf("Welcome Student Panel");
        else
            printf("Invalid password");
    }

    return 0;
}
