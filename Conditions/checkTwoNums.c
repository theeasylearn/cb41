// * check if two nums are same or not 

#include <stdio.h>
void main() {
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d", &num1);
    
    printf("Enter num2 : ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Both nums are same ");
    }
    if (num1 != num2) {
        printf("Both nums are diff ");
    }
}