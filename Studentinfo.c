#include <stdio.h>

int main() {
    char studentName[50];
    int rollNumber;
    int age;
    float height;
    double gpa;
    char section;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height (in feet): ");
    scanf("%f", &height);

    printf("Enter GPA: ");
    scanf("%lf", &gpa);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("\n====================================\n");
    printf("\t\tSTUDENT INFORMATION\n");
    printf("====================================\n\n");

    printf("Name\t\t: %s", studentName);
    printf("Roll No\t\t: %d\n", rollNumber);
    printf("Age\t\t: %d\n", age);
    printf("Height\t\t: %.1f\n", height);
    printf("GPA\t\t: %.2lf\n", gpa);
    printf("Section\t\t: %c\n", section);

    printf("\n====================================\n");

    return 0;
}
