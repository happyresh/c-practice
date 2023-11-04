#include <stdio.h>

int main() {
    char s[51]; // Assuming a maximum input length of 50 characters.
    scanf("%s", s);

    int a_count = 0;
    int length = 0;
    while (s[length] != '\0') {
        if (s[length] == 'a') {
            a_count++;
        }
        length++;
    }

    int half_length = length / 2;

    if (a_count >= half_length) {
        printf("%d\n", length);
    } else {
        printf("%d\n", 2 * a_count - 1);
    }

    return 0;
}
