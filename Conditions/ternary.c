#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    // (age >= 18) ? printf("You can vote ") : printf("You cannot vote ");
    printf((age >= 18) ? "You can vote " : "You cannot vote ");
}