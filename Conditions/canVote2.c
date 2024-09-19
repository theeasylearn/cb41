// * input -> age -> age > 18 -> nat = indian -> you can vote 

#include <stdio.h>
void main() {
    char isIndian;
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("Are you Indian ? (y / n) : ");
        fflush(stdin);
        scanf("%c", &isIndian);
        if (isIndian == 'y') {
            printf("You can vote ");
        } else {
            printf("You cannot vote bkc you are not Indian ");
        }
    } else {
        printf("You cannot vote bkc you are below 18 ");
    }
    // printf("\n age = %d, isIndian = %c ", age, isIndian);
}
