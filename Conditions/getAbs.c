// * get absolute of given num 
// -12 -> 12 
// -302 -> 302 
// 402 -> 402 

// ! -ve -> +ve -> -20 * -1 -> 20 
// ! +ve -> +ve 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0) { // 0 < 0 -> f 
        // printf("-ve num ");
        num = num * -1; // num = -20 * -1 -> num = 20 
    }
    printf("num = %d ", num);    
}
// if (num > 0) {
//     printf("+ve num ");
// } else {
//     printf("-ve num ");
// }