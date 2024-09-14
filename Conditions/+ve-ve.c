// * check if given num is positive or nagetive 

#include <stdio.h>
void main() {
    int num;

    printf("Enter num : ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Num is +ve ");
    }
    if (num < 0) {
        printf("Num is -ve ");
    }
    if (num == 0) {
        printf("0 is neither +ve nor -ve ");
    };
}