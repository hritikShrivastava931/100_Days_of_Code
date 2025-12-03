#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    char ageStr[10];
    int age;


    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Error reading name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0'; 

    printf("Enter your age: ");
    if (fgets(ageStr, sizeof(ageStr), stdin) == NULL) {
        printf("Error reading age.\n");
        return 1;
    }

    if (sscanf(ageStr, "%d", &age) != 1) {
        printf("Invalid age input.\n");
        return 1;
    }
\
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
