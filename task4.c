#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));    
    int m, n, f_s;
    printf("размер массива m n:\n");
    scanf("%d %d", &m, &n);
    int **matrix = malloc(m * sizeof(int*));
    
    printf("matrix:\n");
    for(int i = 0; i < m; ++i){
        matrix[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = rand()%10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("sums colms enter 0, sums rows enter 1:\n");
    scanf("%d", &f_s);
    for (int i = 0; i < n; ++i){
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            if (f_s == 0) sum += matrix[j][i];
            else sum += matrix[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");
        

    for(int i = 0; i < m; ++i){
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;
}
