#include<stdio.h>

float input(float x) {
    return 1 / (1 + x*x);
}
float height(float a, float b, float n) {
    return (b - a) / n;
}
int main() {
    float a, b, n;
    float sumi = 0, sumj = 0, totalsum = 0, y[10];

    printf("Enter the n: ");
    scanf("%f", &n);

    printf("Enter the a and b: ");
    scanf("%f%f", &a, &b);

    float y1 = input(a);
    float yn = input(b);
    float h = height(a, b, n);
    float sum = y1 + yn;

    for (int i = 1; i <= n - 1; i++) {
        y[i] = a + h * i;
        if (i % 2 == 0) {
            sumi += 2 * input(y[i]);
        } else {
            sumj += 4 * input(y[i]);
        }
    }

    totalsum = (h / 3) * (sum + sumi + sumj);
    printf("The value of integration is %f", totalsum);

    return 0;
}

