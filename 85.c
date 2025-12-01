/* Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[101];
    int start = 0, end;
 
    fgets(str, sizeof(str), stdin);
   
    end = 0;
    while (str[end] != '\n' && str[end] != '\0') {
        end++;
    }
    end--; 
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    printf("%s", str);
    return 0;
}