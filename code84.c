#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    printf("Enter status value (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &result);

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Invalid status value!\n");
    }

    return 0;
}
