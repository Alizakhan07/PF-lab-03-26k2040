#include <stdio.h>

int main() {
    float floatValue;
    double doubleValue;

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    printf("\n====================================\n");
    printf("\t\tPRECISION COMPARISON\n");
    printf("====================================\n\n");

    printf("Float value:\n");
    printf("Default : %f\n", floatValue);
    printf("2 digits: %.2f\n", floatValue);
    printf("4 digits: %.4f\n", floatValue);
    printf("6 digits: %.6f\n", floatValue);

    printf("\nDouble value:\n");
    printf("Default : %lf\n", doubleValue);
    printf("2 digits: %.2lf\n", doubleValue);
    printf("4 digits: %.4lf\n", doubleValue);
    printf("6 digits: %.6lf\n", doubleValue);

    return 0;
}
