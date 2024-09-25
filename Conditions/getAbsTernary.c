// * calc absolute of a number using ternary 
// +ve -> +ve 
// -ve -> +ve 
// num = 10 -> abs -> 10 
// num = -12 -> abs -> 12 

#include <stdio.h>
void main() {
    int num = 41;
    printf("Enter a number : ");
    scanf("%d", &num);

    // ! 1
    // num = num < 0 ? num * -1 : num * 1;
    // printf("num = %d ", num);

    // ! 2
    // printf("%d ", num < 0 ? num * -1 : num * 1);

    // ! 3
    num = num * ((num < 0) ? -1 : 1);
    printf("num = %d ", num);

    // 2 * (1 + 1) = 4 
    // 2 * 1 + 1 = 3
}
 
// ? step 1 -> check if num is +ve or -ve 
// ? step 2 -> if num is -ve -> make it +ve 
// ? step 3 -> print num 
