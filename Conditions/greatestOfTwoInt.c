// * num1, num2 -> which one is greater 
// num1 = 1, num2 = 2 -> num2 
// num1 = 30, num2 = 20 -> num1 

#include <stdio.h>
void main() {
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Both nums are same ");
    } else {
        if (num1 > num2) {
            printf("Num1 is greater ");
        } else {
            printf("Num2 is greater ");
        } 
    }
}