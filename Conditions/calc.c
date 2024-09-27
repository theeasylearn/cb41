// +, -, *, / 

#include <stdio.h>
void main() {
    int num1, num2;
    
    printf("Enter num 1 : ");
    scanf("%d", &num1);
    
    printf("Enter num 2 : ");
    scanf("%d", &num2);

    char opr;
    printf("Enter operator : ");
    scanf("%c", &opr);

    switch (opr) {
        case '+':
            printf("%d + %d  = %d ", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d  = %d ", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d  = %d ", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d * %d  = %d ", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operator ");
            break;
    }
}
// opr = '+'
// print num1 + num2 

// opr = '-'
// print num1 - num2 

// opr = '*'
// print num1 * num2 

// opr = '/'
// print num1 / num2 


// 11, 2 '*'
// 11 * 2 = 22 