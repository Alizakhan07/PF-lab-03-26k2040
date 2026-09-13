#include <stdio.h>
#include <string.h>

int main() {
    char studentName[50];
    int rollNumber;
    char section;
    int age;
    double cgpa;
    float height;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0'; // remove trailing newline

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%lf", &cgpa);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("\n====================================\n");
    printf("\t\tSTUDENT REPORT\n");
    printf("====================================\n\n");

    printf("Field\t\tValue\n");
    printf("------------------------------------\n");

    printf("Name\t\t%s\n", studentName);
    printf("Roll Number\t%d\n", rollNumber);
    printf("Section\t\t%c\n", section);
    printf("Age\t\t%d\n", age);
    printf("CGPA\t\t%.2lf\n", cgpa);
    printf("Height\t\t%.2f\n", height);

    printf("------------------------------------\n");

    return 0;
}
