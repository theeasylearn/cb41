#include <stdio.h>
void main() {
    int num1;
    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("num1 = %d \n", num1);

    char ch;
    printf("Enter ch : ");
    fflush(stdin);
    scanf("%c", &ch);

    printf("ch = %c ", ch);
}