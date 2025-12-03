#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0}; 
        int length = 0;
        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]]) {
                break;
            }
            seen[(unsigned char)s[j]] = 1;
            length++;
        }
        if (length > maxLen) {
            maxLen = length;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
