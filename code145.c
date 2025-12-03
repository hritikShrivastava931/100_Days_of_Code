#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, top_index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top_index].marks) {
            top_index = i;
        }
    }

    return s[top_index];
}

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = findTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
