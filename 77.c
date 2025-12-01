/* Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    int diagonal[n];
    int count = 0;

    int min_dim = n < m ? n : m;
    for(int i = 0; i < min_dim; i++)
        diagonal[count++] = matrix[i][i];

    bool distinct = true;
    for(int i = 0; i < count-1 && distinct; i++) {
        for(int j = i+1; j < count; j++) {
            if(diagonal[i] == diagonal[j]) {
                distinct = false;
                break;
            }
        }
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}