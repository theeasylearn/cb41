// * take user marks in input and check if user pass the exam 
// passing marks = 35 

#include <stdio.h>
void main() {
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 35) {
        printf("Good work! You are pass ");
    }
    if (marks < 35) {
        printf("Sorry, You have failed the exam ");
    }
}