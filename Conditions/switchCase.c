#include <stdio.h>
void main() {
    int num = 21;
    switch (num) {
        case 1: 
            printf("one ");
            break;
        case 2: 
            printf("Two ");
            break;
        case 3: 
            printf("Three ");
            break;
        case 4: 
            printf("Four ");
            break;
        case 5:
        case 10: 
            printf("five or ten ");
            break;
        default: 
            printf("More than 5 ");
            break;
    }    

    // if (num == 1) {
    //     printf("One ");
    // } else if (num == 2) {
    //     printf("Two ");
    // } else if (num == 3) {
    //     printf("Three ");
    // } else if (num == 4) {
    //     printf("Four ");
    // } else if (num == 5) {
    //     printf("Five ");
    // } 
}