#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }
    char ch;
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
