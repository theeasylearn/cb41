// * check if user age is greater than 18 

#include <stdio.h>
void main() {
    // ! input -> age  
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    // ! check conditions 
    if (age >= 18) {
        printf("age >= 18 ");
    }
    if (age < 18) {
        printf("age < 18 ");
    }
}