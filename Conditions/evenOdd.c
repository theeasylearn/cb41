// * check if num is even or odd 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // num = 3;
    if (num % 2 == 0) {
        printf("Even num ");
    }
    if (num % 2 != 0) {
        printf("Odd num ");
    } 
}
