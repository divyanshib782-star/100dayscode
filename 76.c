
/* Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool symmetric = true;
    for (int i = 0; i < rows && symmetric; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
