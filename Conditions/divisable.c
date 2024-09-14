// * check if given num is present in table of 3 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // num = 36;
    if (num % 3 == 0) {  // 36 % 3 = 0 
        printf("Nums is present in table of 3 ");
    }
    if (num % 3 != 0) {
        printf("Nums is not present in table of 3 ");
    }
}