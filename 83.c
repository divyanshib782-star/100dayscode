/* Q83: Count vowels and consonants in a string.
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/
#include <stdio.h>

int main() 
{
    char str[101];
    int vowels = 0, consonants = 0, i = 0;
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\n' && str[i] != '\0') 
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
           
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
