#include <stdio.h>

int main() {
    
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Element at matrix[%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }
    
    return 0;
}