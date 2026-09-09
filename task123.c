#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int n, min, max;
    int *arr;
    
    printf("Введите размер массива:\n");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        arr[i] = rand()%100;
        printf("%d ", arr[i]);

        if (i == 0) min = arr[0], max = arr[0];
        else {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
        }
    }
    printf("\nmin:\t%d\nmax:\t%d\ndiff:\t%d\n", min, max, max-min);

    free(arr);
    arr = NULL;
}
