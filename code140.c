#include <stdio.h>
#include <string.h>

// Define enum for Gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;
    char ageStr[10], genderStr[10];

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0'; 


    printf("Enter age: ");
    fgets(ageStr, sizeof(ageStr), stdin);
    sscanf(ageStr, "%d", &p.age);

   
    printf("Select gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    fgets(genderStr, sizeof(genderStr), stdin);
    int g;
    sscanf(genderStr, "%d", &g);
    if (g < 0 || g > 2) {
        printf("Invalid gender selected.\n");
        return 1;
    }
    p.gender = (enum Gender) g;

    const char *genderNames[] = { "MALE", "FEMALE", "OTHER" };

    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}
