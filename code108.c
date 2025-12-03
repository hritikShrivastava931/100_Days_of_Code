#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    int lastSpace = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    printf("Formatted Name: ");

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        } else if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);
    } else {
        printf("%s", name); 
    }

    printf("\n");
    return 0;
}
