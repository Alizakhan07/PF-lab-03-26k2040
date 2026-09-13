#include <stdio.h>

int main() {
    int intValue;
    unsigned int unsignedValue;
    float floatValue;
    double doubleValue;
    char charValue;
    long int longValue;

    printf("Enter an integer value: ");
    scanf("%d", &intValue);

    printf("Enter an unsigned integer value: ");
    scanf("%u", &unsignedValue);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    printf("Enter a character: ");
    scanf(" %c", &charValue);

    printf("Enter a long int value: ");
    scanf("%ld", &longValue);

    printf("\n====================================\n");
    printf("\tDATA TYPE DEMONSTRATION\n");
    printf("====================================\n\n");

    printf("Unsigned Int : %u\n", unsignedValue);
    printf("Char         : %c\n", charValue);
    printf("Long Int     : %ld\n", longValue);

    printf("\n--- Integer Value in Different Bases ---\n");
    printf("Decimal            : %d\n", intValue);
    printf("Octal              : %o\n", intValue);
    printf("Hexadecimal (lower): %x\n", intValue);
    printf("Hexadecimal (upper): %X\n", intValue);

    printf("\n--- Float Value in Different Formats ---\n");
    printf("%%f format : %f\n", floatValue);
    printf("%%e format : %e\n", floatValue);
    printf("%%g format : %g\n", floatValue);

    printf("\n--- Double Value in Different Formats ---\n");
    printf("%%f format : %f\n", doubleValue);
    printf("%%e format : %e\n", doubleValue);
    printf("%%g format : %g\n", doubleValue);

    printf("\n====================================\n");

    return 0;
}
