/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[101];
    int i, length, flag = 0;

    fgets(str, sizeof(str), stdin);

    length = 0;
    while (str[length] != '\n' && str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}