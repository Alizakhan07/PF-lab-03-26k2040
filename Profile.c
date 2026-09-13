#include <stdio.h>
#include <string.h>

int main() {
    char fullName[50];
    char city[30];
    char university[30];
    char department[30];

    printf("Enter full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = '\0'; // remove trailing newline

    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = '\0';

    printf("Enter university: ");
    fgets(university, sizeof(university), stdin);
    university[strcspn(university, "\n")] = '\0';

    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = '\0';

    puts("");
    puts("====================================");
    puts("\t\tSTUDENT PROFILE");
    puts("====================================");
    puts("");

    printf("Name\t\t: %s\n", fullName);
    printf("City\t\t: %s\n", city);
    printf("University\t: %s\n", university);
    printf("Department\t: %s\n", department);

    puts("");
    puts("====================================");

    return 0;
}
