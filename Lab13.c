#include <stdio.h>

double calculate_sum_recursive(int current_i, int n) {
    if (current_i > n) {
        return 0.0;
    } else {
        return (double)(current_i + 1.0) / (current_i + 2.0) + calculate_sum_recursive(current_i + 1, n);
    }
}

int main() {
    int n;
    double sum_s;

    printf("Введіть значення n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Значення n повинно бути >= 1\n");
        sum_s = 0.0;
    } else {
        sum_s = calculate_sum_recursive(1, n);
    }

    printf("Сума s = %.6f\n", sum_s);

    return 0;
}