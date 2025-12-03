#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(fp);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}
