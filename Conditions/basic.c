#include <stdio.h>
void main() {
    int side;
    printf("Enter value of side : ");
    scanf("%d", &side);
    if (side > 0) { // ! +ve side 
        printf("area of sq = %d \n", side * side);
    }   
     
    if (side <= 0) { // ! -ve side 
        printf("Invalid input \n");
    }
    printf("Hello ");
}