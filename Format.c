#include <stdio.h>
#include <string.h>

int main() {
    char studentName[50];
    int rollNumber;
    char section;
    char sampleChar = 'A';
    float floatValue;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = '\0'; // remove trailing newline

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter a floating-point value: ");
    scanf("%f", &floatValue);

    puts("");
    puts("====================================");
    puts("\tPROGRAMMING FUNDAMENTALS");
    puts("====================================");
    puts("");

    printf("Name\t\t: %s\n", studentName);
    printf("Roll No\t\t: %d\n", rollNumber);
    printf("Section\t\t: %c\n", section);

    printf("\nC Topics:\n");
    printf("\t1. Variables\n");
    printf("\t2. Data Types\n");
    printf("\t3. Input/Output\n");
    printf("\t4. Format Specifiers\n");
    printf("\t5. Escape Sequences\n");

    printf("\nSample Character: \'");
    putchar(sampleChar);
    printf("\'\n");

    printf("Sample Question: \"What is C?\"\n");

    printf("\nFloating Value:\n");
    printf("Default : %f\n", floatValue);
    printf("2-digit : %.2f\n", floatValue);
    printf("4-digit : %.4f\n", floatValue);

    puts("");
    puts("====================================");

    return 0;
}
