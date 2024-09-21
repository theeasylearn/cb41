// * input -> char -> check if given value is a vowel or not 
// 'a' -> true 
// 'r' -> false 

#include <stdio.h>
#include <ctype.h> // ! to use 'tolower()' function
void main() {
    char ch;
    printf("Enter a char : ");
    scanf("%c", &ch);
    
    char temp = ch;
    ch = tolower(ch); // ? convert into lower case 

    if (ch == 'a') {
        printf("\'%c\' is an vowel ", temp);
    } else if (ch == 'e') {
        printf("\'%c\' is an vowel ", temp);
    } else if (ch == 'i') {
        printf("\'%c\' is an vowel ", temp);
    } else if (ch == 'o') {
        printf("\'%c\' is an vowel ", temp);
    } else if (ch == 'u') {
        printf("\'%c\' is an vowel ", temp);
    } else {
        printf("\'%c\' is not a vowel ", ch);
    }
}