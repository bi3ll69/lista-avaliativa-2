#include <stdio.h>

int main() {
    int values[10];
    int new_values[9];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d", values[i]);
        if (i != 9) {
            printf(" ");
        }
    }
    printf("\n");

    int size = 10;
    while (size > 1) {
        for (int i = 0; i < size - 1; i++) {
            new_values[i] = values[i] + values[i + 1];
            printf("%d", new_values[i]);
            if (i != size - 2) {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < size - 1; i++) {
            values[i] = new_values[i];
        }
        size--;
    }


    return 0;
}
