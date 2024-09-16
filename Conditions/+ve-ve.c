// * check if num is +ve or -ve 
// num = 10 -> print "Positive num "
// num = -3 -> print "Nagetive num "

#include <stdio.h>
void main() {
    int num = 0;
    printf("Enter a num : ");
    scanf("%d", &num);

    if (num >= 0) { // ! +ve num 
        printf("Positive num ");
    }

    if (num < 0) { // ! -ve num 
        printf("Nagetive num ");
    }
}