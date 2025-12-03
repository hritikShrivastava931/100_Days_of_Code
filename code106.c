#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0, end = 0, len = strlen(str);

    if (str[len - 1] == '\n') str[len - 1] = '\0';

    len = strlen(str);

    while (end <= len) {
        if (str[end] != ' ' && str[end] != '\0') {
            end++;
        } else {
            int i = start, j = end - 1;
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
            end++;
            start = end;
        }
    }

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}
