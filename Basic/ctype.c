// * https://www.geeksforgeeks.org/tolower-function-in-c/
#include <stdio.h>
#include <ctype.h> // ! to use 'tolower()' function
void main() {
    char ch;
    printf("Enter a char : ");
    scanf("%c", &ch);

    printf("tolower(ch) = %c \n", tolower(ch));
    printf("toupper(ch) = %c \n", toupper(ch));
}