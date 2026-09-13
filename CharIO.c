#include <stdio.h>

int main() {
    char firstChar, secondChar, thirdChar;

    printf("Enter first character: ");
    firstChar = getchar();
    getchar(); // consume the newline left in the input buffer

    printf("Enter second character: ");
    secondChar = getchar();
    getchar(); // consume the newline left in the input buffer

    printf("Enter third character: ");
    thirdChar = getchar();
    getchar(); // consume the newline left in the input buffer

    printf("\n--------------------------------\n");
    printf("Characters Entered:\n");

    printf("Character 1 : ");
    putchar(firstChar);
    printf("\n");

    printf("Character 2 : ");
    putchar(secondChar);
    printf("\n");

    printf("Character 3 : ");
    putchar(thirdChar);
    printf("\n");

    printf("--------------------------------\n");

    return 0;
}
