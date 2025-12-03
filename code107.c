#include <stdio.h>
#include <string.h>

int main() {
    char name[200];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    printf("Initials: ");
   
    if (name[0] != ' ')
        printf("%c", name[0]);

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}
