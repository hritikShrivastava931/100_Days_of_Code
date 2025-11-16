#include <stdio.h>

int main() {
    int pattern[] = {1, 0, 3, 0, 5, 0, 3, 0, 1};
    int size = sizeof(pattern) / sizeof(pattern[0]);

    for (int i = 0; i < size; i++) {
        if (pattern[i] == 0) {
            printf("\n"); 
        } else {
            for (int j = 0; j < pattern[i]; j++) {
                printf("*\n");
            }
        }
    }

    return 0;
}
