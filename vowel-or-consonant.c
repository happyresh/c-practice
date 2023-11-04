#include <ctype.h>
#include <stdio.h>

int main() {
    char c;
    int uppercase_vowel, lowercase_vowel;
    printf("Enter a letter of alphabet: ");
    scanf("%c", &c);

    //true if the variable c is a uppercase vowel 
    lowercase_vowel= (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    //true if the variable c is a lowercase vowel
    lowercase_vowel= (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    //show an error message if variable c is not an alphabet letter
    if (!isalpha(c)){
        printf("You have entered a non-alphabetic character, please try again.");
    } else if (uppercase_vowel||lowercase_vowel) {
        printf("%c is a vowel.", c);
    } else {
        printf("%c is a consonant.", c);
    }
    return 0;
}