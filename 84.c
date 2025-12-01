/* Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() 
{
    char str[101];
    int i = 0;
  
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\n' && str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("%s", str);
    return 0;
}