// * check if given num is +ve or -ve using if - else stmt

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("Given num is +ve ");
    } else {
        printf("Given num is -ve ");
    };
}