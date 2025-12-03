#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, top_index = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[top_index].marks) {
            top_index = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[top_index].name);
    printf("Roll Number: %d\n", s[top_index].roll_no);
    printf("Marks: %.2f\n", s[top_index].marks);

    return 0;
}
