#include <stdio.h>
int main() {
    int c, i;
    int freq[128] = {0};

    /* Count characters */
    while ((c = getchar()) != EOF) {
        if (c < 128)
            freq[c]++;
    }

    /* Print histogram */
    for (i = 0; i < 128; i++) {
        if (freq[i] > 0) {
            printf("%c : ", i);

            for (int j = 0; j < freq[i]; j++)
                printf("*");

            printf("\n");
        }
    }

    return 0;
}