#include <stdio.h>

void findMinMax(float arr[], int size, float *min, float *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    float arr[10];
    float min, max;
    
    printf("Digite 10 valores float:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }
    
    findMinMax(arr, 10, &min, &max);
    
    printf("O menor valor é: %.2f\n", min);
    printf("O maior valor é: %.2f\n", max);
    
    return 0;
}
