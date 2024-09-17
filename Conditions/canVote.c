// * user -> age -> check if user can vote or not 

#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age <= 0) {
        printf("Invalid input ");
    } else {
        if (age > 18) { // age >= 19
            printf("You can vote ");
        } else {
            printf("You cannot vote ");
        }
    }
}