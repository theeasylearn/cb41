// * num1, num2, num3 -> print max 

#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("Enter num3 : ");
    scanf("%d", &num3);

    // num1 = 1, num2 = 2, num3 = 3;
    if (num1 > num2) { // 1 > 1 -> f 
        if (num1 > num3) {
            printf("%d ", num1);
        } else {
            printf("%d ", num3);
        }
    } else { // num1 <= num2 
        if (num2 > num3) { // 1 > 1 -> f 
            printf("%d ", num2);
        } else {
            printf("%d ", num3);
        }
    }
}
// scanf("%d_%d %d", &num1, &num2, &num3);
// printf("%d %d %d ", num1, num2, num3);


// num1 = 1, num2 = 2, num3 = 3 

// num1 > num2 -> 1 > 2 -> f 
// else 
//     num2 > num3 -> 2 > 3 -> f 
//     else 
//         print num3 // 3 


// num1 = 3, num2 = 4, num3 = 1

// num1 > num2 -> 3 > 4 -> f 
// else 
//     num2 > num3 -> 4 > 1 -> t 
//         print num2 



// num1 = 5, num2 = 1, num3 = -12

// num1 > num2 -> 5 > 1 -> t 
//     num1 > num3 -> 5 > -12 -> t 
//         print num1 // 5 


